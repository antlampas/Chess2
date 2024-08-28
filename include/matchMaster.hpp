/*
 *
 * FALP Chess 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef MATCHMASTER_HPP
#define MATCHMASTER_HPP

#include "types.hpp"

namespace Chess
{
    class matchMaster
    {
        public:
        matchMaster() = delete;
        matchMaster(std::shared_ptr<std::mutex>,
                    std::shared_ptr<std::queue<std::string>>,
                    std::shared_ptr<std::queue<std::string>>
                   )
        void operator()();

        private:
        agent agentA;
        agent agentB;
        
        private:
        std::shared_ptr<std::condition_variable> turn;
        std::stop_source                         stopSource;
        std::shared_ptr<std::mutex>              internalMutex;
        std::shared_ptr<std::queue<std::string>> internalIncomingQueue;
        std::shared_ptr<std::queue<std::string>> internalOutgoingQueue;
        std::string                              internalIncomingMessage;
        std::string                              internalOutgoingMessage;

        std::shared_ptr<std::mutex>              controllerMutex;
        std::shared_ptr<std::queue<std::string>> controllerIncomingQueue;
        std::shared_ptr<std::queue<std::string>> controllerOutgoingQueue;
        std::string                              controllerIncomingMessage;
        std::string                              controllerOutgoingMessage;

        private:
        bool connectClient(TeamType);
        bool disconnectClient(TeamType);
    };
}

#endif