#include <iostream>
#include <cstdlib>
#include <string>

#ifndef CHEF_H
#define CHEF_H

using namespace std;

class Chef
{
public:
    Chef(string s); // konstruktori
    ~Chef();    // destruktori

    string getName();
    int makeSalad(int);
    int makeSoup(int);
protected:
    string chefName;
};


#endif // CHEF_H
