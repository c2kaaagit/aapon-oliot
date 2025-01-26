#include "Chef.h"
#include <iostream>
#include <cstdlib>
#include <string>

#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

using namespace std;

class ItalianChef : public Chef
{
private:
    string password = "pizza";
    int flour;
    int water;
    int makepizza(int, int);

public:
    ItalianChef(string s); // konstruktori
    ~ItalianChef(); // destruktori

    bool askSecret(string, int, int);
};

#endif // ITALIANCHEF_H
