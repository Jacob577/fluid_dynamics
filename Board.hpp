#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

class Particle{
  int xVel, yVel;
  int xPos, yPos;

  public:
  vector<float> particleMethod (float xDirection, float yDirection); 

  public:
  float matrix (float aNumber); 

  public:
  void myMethod (string thisIsWhatToPrint); 

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
};