#include "game.h"

Game::Game(int mn)
{
    maxNumber = mn;
    cout << "Game instruktori " <<
    "maxNumber on " << maxNumber << endl;
}

Game::~Game()
{
    cout << "Game destruktori" << endl;
}

void Game::play()
{
    cout << "Game play" << endl;
    srand(std::time(0));
    randomNumber = (rand()%maxNumber)+1;
    bool stayInLoop = true;
    numOfGuesses = 0;
    while(stayInLoop)
    {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        numOfGuesses++;
        if(playerGuess == randomNumber)
        {
            cout<<"Arvasit oikein luku = "<<playerGuess<<endl;
            stayInLoop = false;
        }
        else if(playerGuess<randomNumber)
        {
            cout<<"Lukusi on liian pieni"<<endl;
        }
        else
        {
            cout<<"Lukusi on liian suuri"<<endl;
        }

    }
    printGameResult();
}

void Game::printGameResult()
{
    cout << "Game Print game result" << endl;
    cout << "Arvasit " << numOfGuesses << " kertaa" << endl;
}
