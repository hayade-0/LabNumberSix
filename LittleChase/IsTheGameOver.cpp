/*#include "IsTheGameOver.h"

void IsTheGameOver::IsGameOver(bool* GameOver)
{
 
	for (int i = 0; i < 6; i++)
	{

		if ((winningPosition[i][0] == GameObject::obejectLocation[0][0]) || (winningPosition[i][0] == GameObject::obejectLocation[0][1]) || (winningPosition[i][0] == GameObject::obejectLocation[0][2]))
		{
			if ((winningPosition[i][1] == GameObject::obejectLocation[0][0]) || (winningPosition[i][1] == GameObject::obejectLocation[0][1]) || (winningPosition[i][1] == GameObject::obejectLocation[0][2]))
			{
				if ((winningPosition[i][2] == GameObject::obejectLocation[0][0]) || (winningPosition[i][2] == GameObject::obejectLocation[0][1]) || (winningPosition[i][2] == GameObject::obejectLocation[0][2]))
				{
					*GameOver = true;
					renderGameOverScreen(1);
				}

			}

		}

	}
	for (int i = 0; i < 6; i++)
	{

		if ((winningPosition[i][0] == GameObject::obejectLocation[1][0]) || (winningPosition[i][0] == GameObject::obejectLocation[1][1]) || (winningPosition[i][0] == GameObject::obejectLocation[1][2]))
		{
			if ((winningPosition[i][1] == GameObject::obejectLocation[1][0]) || (winningPosition[i][1] == GameObject::obejectLocation[1][1]) || (winningPosition[i][1] == GameObject::obejectLocation[1][2]))
			{
				if ((winningPosition[i][2] == GameObject::obejectLocation[1][0]) || (winningPosition[i][2] == GameObject::obejectLocation[1][1]) || (winningPosition[i][2] == GameObject::obejectLocation[1][2]))
				{
					*GameOver = true;
					renderGameOverScreen(2);
				}

			}

		}

	}

}

void IsTheGameOver::renderGameOverScreen(int x)
{
	SDL_FillRect(GameSurface, NULL, 0x000000);
	SDL_Surface* Gameover = nullptr;
	if (x==1)
		 Gameover = SDL_LoadBMP("gameOverX.bmp");
	else
		Gameover = SDL_LoadBMP("gameOverO.bmp");
	if (Gameover == nullptr)
		cout << "fialed loading chase table " << SDL_GetError() << endl;
	if (GameSurface == nullptr)
		cout << "fialed loading chase table " << SDL_GetError() << endl;
	if (SDL_BlitSurface(Gameover, NULL, GameSurface, NULL) == 0)
		cout << "SDL_BlitSurface " << SDL_GetError() << endl;
	SDL_UpdateWindowSurface(GameWindow);
}
*/