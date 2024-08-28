/*
 *
 * FALP Chess 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

 #include "matchMaster.hpp"

namespace Chess
{
    matchMaster::matchMaster(std::shared_ptr<std::mutex> controllerMutex,
                             std::shared_ptr<std::queue<std::string>> controllerIncomingQueue,
                             std::shared_ptr<std::queue<std::string>> controllerOutgoingQueue
                            ) : turn(std::make_shared<std::condition_variable>()),
                                stopSource(),
                                internalMutex(std::make_shared<std::mutex>()),
                                internalIncomingQueue(std::make_shared<std::queue<std::string>>()),
                                internalOutgoingQueue(std::make_shared<std::queue<std::string>>()),
                                internalIncomingMessage({}),
                                internalOutgoingMessage({}),
                                controllerMutex(controllerMutex),
                                controllerIncomingQueue(controllerIncomingQueue),
                                controllerOutgoingQueue(controllerOutgoingQueue),
                                controllerIncomingMessage({}),
                                controllerOutgoingMessage({}),
                                agentA("A",
                                       player('A'),
                                       this->stopSource.get_token(),
                                       this->turn,
                                       this->internalMutex,
                                       this->internalOutgoingQueue,
                                       this->internalIncomingQueue,
                                       this->controllerMutex,
                                       this->controllerOutgoingQueue,
                                       this->controllerIncomingQueue
                                    ),
                                agentB("B",
                                       player('B'),
                                       this->stopSource.get_token(),
                                       this->turn,
                                       this->internalMutex,
                                       this->internalOutgoingQueue,
                                       this->internalIncomingQueue,
                                       this->controllerMutex,
                                       this->controllerOutgoingQueue,
                                       this->controllerIncomingQueue
                                    )
    {}
}