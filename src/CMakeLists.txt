#FALP Chess 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/

get_directory_property(MYDEFS COMPILE_DEFINITIONS)

add_subdirectory(agent agent)
add_subdirectory(board board)
add_subdirectory(player player)
add_subdirectory(matchMaster matchMaster)
add_subdirectory(utilities utilities)

add_executable(chess main.cpp)

target_link_libraries(chess PUBLIC
                      agent
                      board
                      player
                      matchMaster
                      utilities
                     )