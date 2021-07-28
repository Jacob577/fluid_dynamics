#include <iostream>
#include <vector>
#include <windows.h>
#include "Board.hpp"
using namespace std;


int main() {
  // boardPointer = new Board;
  // Board board;
  // Boar
  // board.setWidthHeight(25,26);
  // board.getNewBoard(40,20);
  // board.setParticle(1, 16, true, 1, 1);
  // board.setParticle(3, 11, true, 1, 1);
  // board.setParticle(3, 1, true, 1, 1);
  // board.displayBoard();

// for (int i = 0; i < 35; i++){
//   board.displayBoard();
//   board.updateBoard();
//   Sleep(500);

// }

Board* boardPnr = new Board;

string var = "Henlo";

string* ptr;

ptr = &var;

std::cout << *ptr;
delete ptr;

// std::cout << "Hello";
  return 0;   
}