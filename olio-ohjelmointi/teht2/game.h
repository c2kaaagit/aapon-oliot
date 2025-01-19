#include <iostream>
#include <ctime>
#include <cstdlib>
#ifndef GAME_H
#define GAME_H

class game
{
public:
    game(int a); //konstruktori
    ~game(); //dekonstruktori

    void play();
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses = 0;
    void printGameResult();
};
#endif // GAME_H
