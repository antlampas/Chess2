#FALP Chess 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/

add_library(utilities SHARED
            isBishopMoveValid.cpp
            isColumnClogged.cpp
            isDiagonalClogged.cpp
            isKingMoveValid.cpp
            isKnightMoveValid.cpp
            isNextSquareClogged.cpp
            isPawnMoveValid.cpp
            isQueenMoveValid.cpp
            isRookMoveValid.cpp
            isRowClogged.cpp
           )