/*
 *
 * FALP Chess 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "types.hpp"
#include "board.hpp"
#include "player.hpp"

#include <condition_variable>

namespace Chess
{
    class agent
    {
        public:
        agent() = delete;
        agent(TeamType,
              player,
              std::shared_ptr<std::condition_variable>,
              std::stop_token,
              std::shared_ptr<std::mutex>,
              std::shared_ptr<std::mutex>
              std::shared_ptr<std::queue<std::string>>,
              std::shared_ptr<std::queue<std::string>>,
              std::shared_ptr<std::queue<std::string>>,
              std::shared_ptr<std::queue<std::string>>
             );
        void operator()();

        private:
        player _player;

        //Internal interface
        private:
        std::shared_ptr<std::condition_variable> turn;
        std::stop_token                          stopToken;
        std::shared_ptr<std::mutex>              internalMutex;
        std::shared_ptr<std::queue<std::string>> incomingQueue;
        std::shared_ptr<std::queue<std::string>> outgoingQueue;
        std::string                              incomingMessage;
        std::string                              outgoingMessage;

        //Interface to client
        private:
        std::shared_ptr<std::mutex>              controllerMutex;
        std::shared_ptr<std::queue<std::string>> controllerIncomingQueue;
        std::shared_ptr<std::queue<std::string>> controllerOutgoingQueue;
        std::string                              controllerCncomingMessage;
        std::string                              controllerOutgoingMessage;
    };
}