/*#pragma once
#include<iostream>
#include<SDL2/SDL.h>
#include <string>
using namespace std;
class GameObject
{
	public:
		static int obejectLocation[2][3];

		
		GameObject();
		virtual void displayObject(SDL_Surface* GameSurface, SDL_Rect* Rect) = 0;
		bool setPlayerLocation( int objectNumber, int GameCoadrant, string playerName);
};
class PlayerOne :public GameObject
{
	SDL_Surface* playerObject=nullptr;
public:
	PlayerOne():playerObject(SDL_LoadBMP("playerOne.bmp")),GameObject(){}
	void displayObject(SDL_Surface* GameSurface,SDL_Rect* Rect);
	bool setPlayerOneLocation(int objectNumber,int GameCoadrant );
	SDL_Surface* getSurface();

	
	
};
class PlayerTwo :public GameObject
{
	SDL_Surface* playerObject= nullptr;
public:
	PlayerTwo():playerObject(SDL_LoadBMP("playerTwo.bmp")), GameObject() {}
	void displayObject(SDL_Surface* GameSurface, SDL_Rect* Rect);
	bool setPlayerOneLocation(int objectNumber,int GameCoadrant);
	SDL_Surface* getSurface();

};
*/