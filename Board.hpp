#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

class Particle{
  int xVel, yVel;
  int xPos, yPos;
  int yAcc;
  bool active = false;

  // public:
  // vector<float> particleMethod (float xDirection, float yDirection); 

  public:
  void setyAcc (int acc){
    yAcc = acc;
  }

  public:
  int getxVel (){
    return xVel;
  }
  public:
  int getyVel (){
    return yVel;
  }
  public:
  int getxPos (){
    return xPos;
  }
  public:
  int getyPos (){
    return yPos;
  }
  public:
  bool getActive(){
    return active;
  }
  public:
  void setxVel (int xVel1){
    xVel = xVel1;
  }
  public:
  void setxPos (int xPos1){
    xPos = xPos1;
  }
  public:
  void setyVel (int yVel1){
    yVel = yVel1;
  }
  public:
  void setyPos (int yPos1){
    yPos = yPos1;
  }
  public:
  void setActive(bool a){
    active = a;
  }
};

class Board{
  public:
  int width, height;
  vector<vector<Particle>> boardObject;

  public:
  Particle particleObject; //vector<vector<Particle>>

  void getNewBoard(int w, int h){
  width = w;
  height = h;
  vector<Particle> cols (height, particleObject);
  vector<vector<Particle>> emptyBoard (width, cols);
  boardObject = emptyBoard;
  }

  public:
  void setParticle(int xcoor, int ycoor, bool active, int xvel, int yvel){
    boardObject[xcoor][ycoor].setActive(active);
    boardObject[xcoor][ycoor].setxVel(xvel);
    boardObject[xcoor][ycoor].setyVel(yvel);
  }
  

  public:
  void updateBoard(){
    vector<vector<Particle>> temporaryBoard = boardObject;     

    for (int i = 0; i < temporaryBoard[0].size(); i++){
      for (int j = 0; j < temporaryBoard.size(); j++){
        //Create the cases for when the relevant particle is by the edges
        //Check bottom
        // if (boardObject[i][j].getyPos() + 1 == height){
        //   temporaryBoard[i][j].setyVel(0);
        //   boardObject[i][j].setyVel(0);
          // std::cout << j;
        // }

        //move down
        if (boardObject[i][j].getActive()){
          temporaryBoard[i][j].setActive(false);
          temporaryBoard[i][j+boardObject[i][j].getyVel()].setActive(true);
          temporaryBoard[i][j+boardObject[i][j].getyVel()].setyVel(boardObject[i][j].getyVel());
          temporaryBoard[i][j+boardObject[i][j].getyVel()].setyPos(j);
        }     
      }
    }
    boardObject = temporaryBoard;   
  }

  public:
  void displayBoard (){
    system("CLS");
    string displayibleString = "";

    for (int i = 0; i < boardObject[0].size(); i++){
      for (int j = 0; j < boardObject.size(); j++){
        if (boardObject[j][i].getActive()){
          displayibleString.append("#");
        } else {
          displayibleString.append("|");
        }
      }
      displayibleString.append("\n");
    }
    std::cout << displayibleString;
  }
};