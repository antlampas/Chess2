/*
 *
 * FALP Chess 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "types.hpp"

namespace Chess
{
    class board
    {
        public:
        board();
        board(BoardType);
        SquareType move(DecodedCoordinates,DecodedCoordinates);
        
        private:
        BoardType _board;
    };
}