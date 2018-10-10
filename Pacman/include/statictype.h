#ifndef _STATICTYPE_H_
#define _STATICTYPE_H_
extern static bool replay; //check if starts a new game
extern static bool over; //check for the game to be over
extern static float squareSize; //size of one square on the game
extern static float xIncrement; // x movement on pacman
extern static float yIncrement; // y movement on pacman
extern static int rotation; // orientation of pacman
extern float* monster1; //coordinates and direction of first monster
extern float* monster2; //coordinates and direction of second monster
extern float* monster3; //coordinates and direction of third monster
extern float* monster4; //coordinates and direction of fourth monster
extern static vector<int> border; //coordinates of the border walls

//coordinates of the obstacles (divided into 3 for clarity)
extern static vector<int> obstaclesTop;
extern static vector<int> obstaclesMiddle;
extern static vector<int> obstaclesBottom;
extern static deque<float> food;
extern static vector<vector<bool>> bitmap; // 2d image of which squares are blocked and which are clear for pacman to move in 
extern bool* keyStates; // record of all keys pressed 
extern int points; // total points collected
#endif