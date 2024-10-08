/*
 *
 * FALP Chess 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef TYPES_HPP
#define TYPES_HPP

#include <vector>
#include <string>
#include <utility>
#include <queue>
#include <memory>

namespace Chess
{
    using SquareType             = std::string;
    using ColumnType             = std::vector<SquareType>;
    using BoardType              = std::vector<ColumnType>;
    using CheckerType            = std::string;
    using DecodedCoordinatesType = std::pair<int,int>;
    using CoordinatesType        = std::string;
    using TeamType               = char;

    enum Teams {
                WHITE = 'w',
                BLACK = 'b'
              };

    enum Checkers {
                    PAWN   ='p',
                    ROOK   ='r',
                    KNIGHT ='n',
                    BISHOP ='b',
                    QUEEN  ='q',
                    KING   ='k'
                  };
    enum Direction {
                     N,
                     NE,
                     E,
                     SE,
                     S,
                     SO,
                     O,
                     NO,
                   };
}

#endif