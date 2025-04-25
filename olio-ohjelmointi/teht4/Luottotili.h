#include "Pankkitili.h"
#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

using namespace std;

class Luottotili : public Pankkitili
{
public:
    Luottotili(string, double); //konstruktori
    bool deposit(double) override;
    bool withdraw(double) override;
protected:
    double luottoRaja = 0;
};


#endif // LUOTTOTILI_H
