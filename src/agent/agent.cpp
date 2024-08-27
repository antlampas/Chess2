/*
 *
 * FALP Chess 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

 #include "agent.hpp"

namespace Chess
{
    agent::agent(std::string                              name,
                 player                                   p,
                 std::shared_ptr<std::condition_variable> turn,
                 std::stop_token                          stopToken,
                 std::shared_ptr<std::mutex>              internalMutex,
                 std::shared_ptr<std::mutex>              controllerMutex,
                 std::shared_ptr<std::queue<std::string>> incomingQueue,
                 std::shared_ptr<std::queue<std::string>> outgoingQueue,
                 std::shared_ptr<std::queue<std::string>> controllerIncomingQueue,
                 std::shared_ptr<std::queue<std::string>> controllerOutgoingQueue
                ) : name(name),
                    _player(player),
                    turn(turn),
                    stopToken(stopToken),
                    internalMutex(internalMutex),
                    controllerMutex(controllerMutex),
                    incomingQueue(incomingQueue),
                    outgoingQueue(outgoingQueue),
                    controllerIncomingQueue(controllerIncomingQueue),
                    controllerOutgoingQueue(controllerOutgoingQueue)
                {}
}