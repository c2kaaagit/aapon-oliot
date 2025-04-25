#include <iostream>
#include <string>
#ifndef PANKKITILI_H
#define PANKKITILI_H

using namespace std;

class Pankkitili
{
public:
    Pankkitili(string); //konstuktori

    double getBalance();
    virtual bool deposit(double);
    virtual bool withdraw(double);
protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
