#include <iostream>
#include <vector>
#include <windows.h>
#include "Board.hpp"
using namespace std;

// class Board {
//   Particle Board;

  // public:
  // void vector<vector<<Particle>> (Particle)
// };



int main() {
  Particle myPart;
  int matrixSize = 30;
  myPart.setxVel(1);
  myPart.setxPos(0);
  myPart.setyVel(1);
  myPart.
  
  
  setyPos(0);

  std::vector<Particle> matrix (matrixSize, myPart);
  std::vector<vector<Particle>> matrix2 (matrixSize*2, matrix);

  std::vector<string> print1 (matrixSize, " ");
  std::vector<vector<string>> print2 (matrixSize*2, print1);
  string myString;
  bool isInRow = false;

  for (int k = 0; k < 35; k++){
    for (int i = 0; i < matrixSize; i++){
      std::cout << endl;
      for (int j = 0; j < matrixSize*2; j++){
        isInRow = true;
        // std::cout << "h ";
        if (myPart.getxPos() == j){
          if (myPart.getyPos() == i){
            // matrix2[i][j] = "#";
            isInRow = false;
            myString.append("X");
          }
        } 
        if (isInRow){
          myString.append(" ");
        }
      }
      myString.append("\n");    
  }
    myPart.setxPos(myPart.getxPos() + myPart.getxVel());
    myPart.setyPos(myPart.getyPos() + myPart.getyVel());
    
    system("CLS");
    std::cout << myString;
    myString = "";
    Sleep(300);    
  }
    
  
  // for (int j = 0; j < matrix.size(); j++){
  //   string myString;
  //   for (int i = 0; i < matrix.size(); i++){
  //     if (myPart.getxPos() == i){
  //         matrix[i] = "#";
          
  //     } else{
  //       matrix[i] = " ";
  //     }        
  //   }
  //   myPart.setxPos(myPart.getxPos() + myPart.getxVel());
  //   for (string element : matrix){
  //     myString.append(element);
  //   }
  //   std::cout << myString << endl;
  //   Sleep(50);
  //   system("CLS");
  // }
  return 0;   
}