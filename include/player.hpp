/*
 *
 * FALP Chess 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "types.hpp"

namespace Chess
{
    class player
    {
        public:
        player() = delete;
        player(TeamType);
        TeamType getTeam();
        TeamType setTeam(TeamType);

        private:
        TeamType team;
    };
}

#endif