/*
 *
 * FALP Chess 2 © 2023 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

 #include "matchMaster.hpp"

namespace Chess
{
    matchMaster::matchMaster() : turn(std::make_shared(new std::condition_variable)),
                                 stopSource({}),
                                 mutex(std::make_shared(new std::mutex)),
                                 incomingQueue(new std::deque<std::string>()),
                                 outgoingQueue(new std::deque<std::string>()),
                                 incomingMessage({}),
                                 incomingMessage({}),
                                 agentA("A",
                                        player("A"),
                                        this->turn;
                                        this->stopSource.get_token(),
                                        this->mutex,
                                        std::make_shared(new std::mutex),
                                        this->outgoingQueue,
                                        this->incomingQueue,
                                        std::make_shared(new std::deque<std::string>()),
                                        std::make_shared(new std::deque<std::string>())
                                       ),
                                 agentA("B",
                                        player("B"),
                                        this->turn;
                                        this->stopSource.get_token(),
                                        this->mutex,
                                        std::make_shared(new std::mutex),
                                        this->outgoingQueue,
                                        this->incomingQueue,
                                        std::make_shared(new std::deque<std::string>()),
                                        std::make_shared(new std::deque<std::string>())
                                       )
    {}
}