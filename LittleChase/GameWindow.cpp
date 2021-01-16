/*#include "GameWindow.h"
#include"GameObject.h"
PlayerOne one;
PlayerTwo two;
int GameObject::obejectLocation[2][3] = {0,0,0,0,0,0};
GameWindow::GameWindow()
{
	for (int i = 0; i < 9; i++)
		ChassCordinate[i] = new int[2];//setting chase cordinate in game window
	int ChaseArray[9][2]= { 50,50,250,50,450,50,50,250,250,250,450,250,50,450,250,450,450,450 };
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 2; j++)
			ChassCordinate[i][j] = ChaseArray[i][j];
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0)
		cout << "unable to initialize SDL" << endl;
	GamingBox.x=0;
	GamingBox.y = 0;
	GamingBox.w = 600;
	GamingBox.h = 600;
	
	ChaseWindow = SDL_CreateWindow(GameName, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,800,600, SDL_WINDOW_SHOWN);
	GameSurface = SDL_GetWindowSurface(ChaseWindow);
	if (GameSurface == nullptr)
		cout << "Game surface not created " <<SDL_GetError()<< endl;
	renderer= SDL_CreateRenderer(ChaseWindow, -1, 0);
	SDL_Surface* tempSurface = nullptr;
	ForeverSurface=SDL_LoadBMP("white.bmp");
	if (ForeverSurface == nullptr)
		cout << "fialed loading white " << SDL_GetError() << endl;
	tempSurface = SDL_LoadBMP("chaseTable.bmp");
	if (tempSurface == nullptr)
		cout << "fialed loading chase table " << SDL_GetError()<<endl;
	if (SDL_BlitSurface(tempSurface, NULL, GameSurface, &GamingBox) == 0)
		cout << "SDL_BlitSurface " << SDL_GetError() << endl;
	SDL_FreeSurface(tempSurface);
	SDL_UpdateWindowSurface(ChaseWindow);
	SDL_Surface* turnBordSurface = nullptr;
	SDL_Rect tempRect;
	tempRect.x = 600;
	tempRect.y = 0;
	tempRect.w = 199;
	tempRect.h = 599;
	turnBordSurface = SDL_LoadBMP("turnBord.bmp");
	if (turnBordSurface == nullptr)
		cout << "fialed loading turnBord " << SDL_GetError() << endl;
	if (SDL_BlitSurface(turnBordSurface, NULL, GameSurface, &tempRect) == 0)
		cout << "SDL_BlitSurface " << SDL_GetError() << endl;
	SDL_FreeSurface(turnBordSurface);
	SDL_UpdateWindowSurface(ChaseWindow);
	SDL_BlitSurface(GameSurface, NULL, ForeverSurface, NULL);
	oneOne = one.getSurface();
	if (oneOne == nullptr)
		cout << "oneOne is not loaded" << endl;
	cout << one.setPlayerOneLocation(0, 0);
	//PlaceObject(oneOne,0,0);
	oneTwo = oneOne;
	cout << one.setPlayerOneLocation(1, 1);
	//PlaceObject(oneTwo, 0, 1);
	oneThree = oneOne;
	cout << one.setPlayerOneLocation(2, 2);
	//PlaceObject(oneThree, 0, 2);
	twoOne = two.getSurface(); 
	cout << two.setPlayerOneLocation( 0,6);
	//PlaceObject(twoOne, 1, 0);
	twoTwo = twoOne;
	cout << two.setPlayerOneLocation(1,7);
	//PlaceObject(twoTwo, 1, 1);
	twoThree= twoOne;
	cout << two.setPlayerOneLocation(2,8);
	//PlaceObject(twoThree, 1, 2);
	GameOver=false;
	PlaceObject();
	UpdateWindow();
}

void GameWindow::DisplayPlayer()
{
	
}

void GameWindow::UpdateWindow()
{
	SDL_UpdateWindowSurface(ChaseWindow);
	if (GameOver == true)
	{
		checkerThread->join();

	}
}

SDL_Surface* GameWindow::getGameSurface()
{
	return GameSurface;
}

void GameWindow::MoveObject(int x, int y)
{
	int GameCoadrant;

	movingRect.w = 100;
	movingRect.h = 100;

	for (int i = 0; i < 9; i++)
	{
		if (((ChassCordinate[i][0] - 50) < x && (ChassCordinate[i][0]) + 150 > x) && ((ChassCordinate[i][1] - 50) < y && (ChassCordinate[i][1]) + 150 > y))
			GameCoadrant = i;
	}
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			if (GameObject::obejectLocation[i][j] == GameCoadrant)

			{
				currentObjectHolded[0][0] = i;
				currentObjectHolded[0][1] = j;
			}

}

void GameWindow::PlaceObject()
{
	if (SDL_BlitSurface(ForeverSurface, NULL, GameSurface, NULL) == 0)
		cout << "SDL_BlitSurface " << SDL_GetError() << endl;
	
	SDL_UpdateWindowSurface(ChaseWindow);
	SDL_Delay(200);
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
		{
			int coadrant = GameObject::obejectLocation[i][j];
			SDL_Rect tempRect;
			tempRect.w = 100;
			tempRect.h = 100;
			tempRect.x = ChassCordinate[coadrant][0];
			tempRect.y = ChassCordinate[coadrant][1];
			if (i == 0)
			{
				if (SDL_BlitSurface(one.getSurface(), NULL, GameSurface, &tempRect) == 0)
					cout << "SDL_BlitSurface " << SDL_GetError() << endl;

			}
			else
			{
				if (SDL_BlitSurface(two.getSurface(), NULL, GameSurface, &tempRect) == 0)
					cout << "SDL_BlitSurface " << SDL_GetError() << endl;
			}
	
		}
			SDL_UpdateWindowSurface(ChaseWindow);
			SDL_Delay(200);


}

void GameWindow::LocationUpdate(int x, int y)
{
	int GameCoadrant;
	for (int i = 0; i < 9; i++)
	{
		if (((ChassCordinate[i][0] - 50) < x && (ChassCordinate[i][0]) + 150 > x) && ((ChassCordinate[i][1] - 50) < y && (ChassCordinate[i][1]) + 150 > y))
			GameCoadrant = i;
	}
	if (currentObjectHolded[0][0] == 0)
	{
		cout << one.setPlayerOneLocation(currentObjectHolded[0][1], GameCoadrant);
	}
	else
		cout << two.setPlayerOneLocation(currentObjectHolded[0][1], GameCoadrant);
	PlaceObject();
	//UpdateWindow();
	//SDL_Delay(300);
}

bool GameWindow::IsThisMoveAllowed()
{
	return false;
}

bool GameWindow::ISGameOver()
{
	return false;
}

SDL_Window* GameWindow::getGameWindow()
{
	return ChaseWindow;
}

*/