#ifndef _MAIN_H_
#define _MAIN_H_
#include <vector>
#include <GL/glut.h>
#include <iostream>
#include <cstring>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
#include <deque>
#include <stdlib.h>
using namespace std;

extern bool replay; //check if starts a new game
extern bool over; //check for the game to be over
extern float squareSize; //size of one square on the game
extern float xIncrement; // x movement on pacman
extern float yIncrement; // y movement on pacman
extern int rotation; // orientation of pacman
extern float* monster1; //coordinates and direction of first monster
extern float* monster2; //coordinates and direction of second monster
extern float* monster3; //coordinates and direction of third monster
extern float* monster4; //coordinates and direction of fourth monster
extern vector<int> border; //coordinates of the border walls

//coordinates of the obstacles (divided into 3 for clarity)
extern vector<int> obstaclesTop;
extern vector<int> obstaclesMiddle;
extern vector<int> obstaclesBottom;
extern deque<float> food;
extern vector<vector<bool>> bitmap; // 2d image of which squares are blocked and which are clear for pacman to move in 
extern bool* keyStates; // record of all keys pressed 
extern int points; // total points collected
#endif