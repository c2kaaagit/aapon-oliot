#include "game.h"

using namespace std;

game::game(int a) //konstruktori
{
    maxNumber = a;
    cout << "PELI KONSTRUKTORI: olio alustettu maksiminumerolla " << maxNumber << endl;
}

game::~game()
{

}

void game::printGameResult()
{
    cout << "Oikea vastaus oli " << randomNumber << endl;
    cout << "Siihen meni " << numOfGuesses << " yritysta." <<endl;
}



void game::play()
{

    //luodaan satunnainen luku
    srand(std::time(0));
    randomNumber = (rand() % maxNumber)+1;
    //looppi alkaa ja kysytään pelaajalta luku
    while (true)
    {

        cout << "Arvaa luku 1-" << maxNumber << endl;
        cin >> playerGuess;

        numOfGuesses++;
        if(playerGuess > randomNumber)
        {
            cout << "luku on pienempi" << endl;
            continue;
        }
        if(playerGuess < randomNumber)
        {
            cout << "luku on suurempi" << endl;
            continue;
        }
        if(playerGuess == randomNumber)
        {
            cout << "oikea vastaus" << endl;
            break;
        }

    }
    printGameResult();
}


