/*
 *
 * FALP Chess © 2023 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include <vector>
#include <string>
#include <pair>

namespace Chess
{
    using SquareType         = std::string;
    using ColumnType         = std::vector<SquareType>;
    using BoardType          = std::vector<ColumnType>;
    using CheckerType        = std::string;
    using DecodedCoordinates = std::pair<int,int>;
    using CoordinatesType    = std::string;

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
}