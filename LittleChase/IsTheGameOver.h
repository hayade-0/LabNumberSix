/*#pragma once
#include "GameWindow.h"
#include"GameObject.h"
#include<SDL2/SDL.h>
class IsTheGameOver
{
	int const winningPosition[6][3] = { 0,4,8,2,4,6,1,4,7,3,4,5,0,3,6,2,5,8 };
	SDL_Surface* GameSurface = nullptr;
	SDL_Window* GameWindow = nullptr;

public:
	IsTheGameOver(SDL_Surface* GameSurface,SDL_Window* GameWindow) :GameSurface(GameSurface), GameWindow(GameWindow){ }
	void IsGameOver(bool* GameOver);
	void renderGameOverScreen(int x);


};
*/
