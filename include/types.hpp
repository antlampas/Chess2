/*
 *
 * FALP Chess 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include <vector>
#include <string>
#include <pair>

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
                     N  = "n",
                     NE = "se",
                     E  = "e",
                     SE = "se",
                     S  = "s",
                     SO = "so",
                     O  = "s",
                     NO = "no",
                   };
}