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
                            ) : turn(std::make_shared(new std::condition_variable)),
                                 stopSource({}),
                                 internalMutex(std::make_shared(new std::mutex)),
                                 internalIncomingQueue(new std::queue<std::string>()),
                                 internalOutgoingQueue(new std::queue<std::string>()),
                                 internalIncomingMessage({}),
                                 internalOutgoingMessage({}),
                                 controllerMutex(controllerMutex),
                                 controllerIncomingQueue(controllerIncomingQueue),
                                 controllerOutgoingQueue(controllerOutgoingQueue),
                                 controllerIncomingMessage({}),
                                 controllerOutgoingMessage({}),
                                 agentA('A',
                                        player('A'),
                                        this->turn;
                                        this->stopSource.get_token(),
                                        this->mutex,
                                        std::make_shared(new std::mutex),
                                        this->outgoingQueue,
                                        this->incomingQueue,
                                        std::make_shared(new std::queue<std::string>()),
                                        std::make_shared(new std::queue<std::string>())
                                       ),
                                 agentA('B',
                                        player('B'),
                                        this->turn;
                                        this->stopSource.get_token(),
                                        this->mutex,
                                        std::make_shared(new std::mutex),
                                        this->outgoingQueue,
                                        this->incomingQueue,
                                        std::make_shared(new std::queue<std::string>()),
                                        std::make_shared(new std::queue<std::string>())
                                       )
    {}
}