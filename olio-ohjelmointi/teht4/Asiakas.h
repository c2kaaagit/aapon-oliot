#include "Pankkitili.h"
#include "Luottotili.h"
#ifndef ASIAKAS_H
#define ASIAKAS_H

using namespace std;

class Asiakas
{
private:
    string nimi;
    Pankkitili käyttötili;
    Luottotili luottotili;
public:
    Asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
};

#endif // ASIAKAS_H
