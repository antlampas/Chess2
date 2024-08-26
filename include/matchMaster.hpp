/*
 *
 * FALP Chess © 2023 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "types.hpp"

namespace Chess
{
    class matchMaster
    {
        public:
        matchMaster();
        void operator()();

        private:
        agent agentA;
        agent agentB;
        
        private:
        std::shared_ptr<std::condition_variable> turn;
        std::stop_source                         stopSource;
        std::shared_ptr<std::mutex>              mutex;
        std::shared_ptr<std::deque<std::string>> incomingQueue;
        std::shared_ptr<std::deque<std::string>> outgoingQueue;
        std::string                              incomingMessage;
        std::string                              outgoingMessage;
    };
}