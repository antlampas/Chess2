/*
 *
 * FALP Chess 2 © 2023 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

 #include "matchMaster.hpp"

namespace Chess
{
    matchMaster::matchMaster() : turn(new turn),
                                 stopSource({}),
                                 mutex(new mutex),
                                 incomingQueue(new std::deque<std::string>()),
                                 outgoingQueue(new std::deque<std::string>()),
                                 incomingMessage({}),
                                 incomingMessage({})
    {}
}