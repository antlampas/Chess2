/*
 *
 * FALP Chess 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

namespace Chess
{
    bool isColumnClogged(DecodedCoordinatesType);
    bool isRowClogged(DecodedCoordinatesType);
    bool isDiagonalClogged(DecodedCoordinatesType,Direction);
    bool isNextSquareClogged(DecodedCoordinatesType,Direction);
    bool isPawnMoveValid(DecodedCoordinatesType,DecodedCoordinatesType);
    bool isRookMoveValid(DecodedCoordinatesType,DecodedCoordinatesType);
    bool isKnightMoveValid(DecodedCoordinatesType,DecodedCoordinatesType);
    bool isBishopMoveValid(DecodedCoordinatesType,DecodedCoordinatesType);
    bool isQueenMoveValid(DecodedCoordinatesType,DecodedCoordinatesType);
    bool isKingMoveValid(DecodedCoordinatesType,DecodedCoordinatesType);
}