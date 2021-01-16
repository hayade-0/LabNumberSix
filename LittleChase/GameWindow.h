/*#pragma once
#include <iostream>
#include<SDL2/SDL.h>
#include "IsTheGameOver.h"
#include<thread>;
using namespace std;
class GameWindow
{

	int currentObjectHolded[1][2];
	SDL_Surface * ForeverSurface = nullptr;
	SDL_Rect movingRect;
	SDL_Texture* texture = nullptr;
	SDL_Window* ChaseWindow = nullptr;
	const char* GameName = "Little Chase";
	SDL_Renderer* renderer = nullptr;
	SDL_Surface* GameSurface = nullptr;
	SDL_Surface* oneOne = nullptr;//creatting three surface for each player"oneone" stand for player one surface one
	SDL_Surface* oneTwo = nullptr;
	SDL_Surface* oneThree = nullptr;
	SDL_Surface* twoOne= nullptr;
	SDL_Surface* twoTwo = nullptr;
	SDL_Surface* twoThree = nullptr;
	SDL_Rect GamingBox;
	int* playerOneLocation=nullptr;
	int* pleyerTwoLocation=nullptr;
	int** ChassCordinate = new int* [9];
	thread* checkerThread = new thread;
public:
	bool GameOver = false;
	GameWindow();
	void DisplayPlayer();
	void UpdateWindow();
	SDL_Surface* getGameSurface();
	void MoveObject(int x, int y);
	void PlaceObject();
	void LocationUpdate(int x, int y);
	bool IsThisMoveAllowed();
	bool ISGameOver();
	SDL_Window* getGameWindow();
};
*/