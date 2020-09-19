#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <process.h>
#include <unistd.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void Delay(long double);
void Move();
void Food();
int Score();
void Print();
void GotoXY(int x,int y);
void Down();
void Left();
void Up();
void Right();
void ExitGame();
int Scoreonly();
