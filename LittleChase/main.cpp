/*#include"GameWindow.h"
#include<iostream>
#include<SDL2/SDL.h>
using namespace std;
int main(int argc, char* argv[])
{

	GameWindow LittleChase;
	IsTheGameOver checker(LittleChase.getGameSurface(), LittleChase.getGameWindow());
	
	SDL_Event event;
	bool GameOver = false;
	while (GameOver== false)
	{
		

		while (SDL_PollEvent(&event) == 1)
		{
			thread checkerThread (&IsTheGameOver::IsGameOver, &checker, &GameOver);
			switch (event.type)
			{
			case SDL_MOUSEBUTTONDOWN:
				int x, y;
				SDL_GetMouseState(&x, &y);
				LittleChase.MoveObject(x, y);
				cout << "mouse pressed" << endl;
				checkerThread.join();
				break;
				
			case SDL_MOUSEBUTTONUP:
				SDL_GetMouseState(&x, &y);
				LittleChase.LocationUpdate(x, y);
				cout << "mouse pressed" << endl;
				checkerThread.join();
				break;

			default:
				checkerThread.join();
				break;
			}
		}
	}
	SDL_Delay(3000);
	return 0;
}*/