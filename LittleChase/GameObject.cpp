/*#include "GameObject.h"

void PlayerOne::displayObject(SDL_Surface* GameSurface,SDL_Rect* Rect)
{
	if (playerObject == nullptr)
		cout << "fialed loading turnBord " << SDL_GetError() << endl;
	if (SDL_BlitSurface(playerObject, NULL, GameSurface,Rect) == 0)
		cout << "SDL_BlitSurface " << SDL_GetError() << endl;
	
}

bool PlayerOne::setPlayerOneLocation(int objectNumber,int GameCoadrant )
{
	return this->setPlayerLocation(objectNumber, GameCoadrant, "PlayerOne");
}

SDL_Surface* PlayerOne::getSurface()
{
	return playerObject;
}



void PlayerTwo::displayObject(SDL_Surface* GameSurface, SDL_Rect* Rect)
{
	if (playerObject == nullptr)
		cout << "fialed loading turnBord " << SDL_GetError() << endl;
	if (SDL_BlitSurface(playerObject, NULL, GameSurface, Rect) == 0)
		cout << "SDL_BlitSurface " << SDL_GetError() << endl;
}

bool PlayerTwo::setPlayerOneLocation( int objectNumber, int GameCoadrant)
{
	return this->setPlayerLocation(objectNumber, GameCoadrant,"PlayerTwo");
}

SDL_Surface* PlayerTwo::getSurface()
{
	return playerObject;
}


bool GameObject::setPlayerLocation(int objectNumber, int GameCoadrant, string playerName)
{

	cout << endl;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			if (obejectLocation[i][j] == GameCoadrant)// the cordant is ocopanied
				return 0;
	if (playerName == "PlayerOne")
	{
		obejectLocation[0][objectNumber] = GameCoadrant;
		return 1;
	}
	else
	{
		obejectLocation[1][objectNumber] = GameCoadrant;
		cout << endl;
		return 1;

	}

}

*/