#include "Asiakas.h"


Asiakas::Asiakas(string nimi, double d)
{

    luottotili(nimi, d);
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Käyttötilin saldo on " << käyttötili.getBalance() << endl;
    cout << "Luottotilin saldo on " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double d)
{
    return käyttötili.deposit(d);
}

bool Asiakas::nosto(double d)
{
    return käyttötili.withdraw(d);
}

bool Asiakas::luotonMaksu(double d)
{
    return luottotili.deposit(d);
}

bool Asiakas::luotonNosto(double d)
{
    return luottotili.withdraw(d);
}

