#include <iostream>

#include "Tile.h"
#include "Tile.cpp"
#include "Board.h"

#define BOARD_SIZE 15

Board::Board(){
    for(int i = 0; i <= BOARD_SIZE; i++){
        for(int j = 0; j <= BOARD_SIZE; j++){
            Tile tile = Tile(' ', 0, i, j);
        }
    }

Board::printBoard(){
    std::cout << "\n" << std::endl;
    std::cout << tile.letter << std::endl;

}
}
