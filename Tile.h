
#ifndef ASSIGN2_TILE_H
#define ASSIGN2_TILE_H

// Define a Letter type
typedef char Letter;

// Define a Value type
typedef int Value;

class Tile {
public:
   Letter letter;
   Value  value;
   int xCoord;
   int yCoord;

   Tile(char letter, int value, int xCoord, int yCoord) :
         letter(letter), value(value), xCoord(xCoord), yCoord(yCoord) {
   }
   ~Tile(){
   }

   void createBoard();
      
};

#endif // ASSIGN2_TILE_H
