#include "Pankkitili.h"



Pankkitili::Pankkitili(string nimi)
{
    omistaja = nimi;
    cout << "Pankkitili avattu nimella " << omistaja << endl;
}

double Pankkitili::getBalance()
{
    if(saldo == 0)
    {
        cout << "Tilinne saldo on nolla." << endl;
    }
    else
    {
        cout << "Tilinne saldo on " << saldo << endl;
    }
    return saldo;
}

bool Pankkitili::deposit(double maara)
{
    if(maara < 0)
    {
        cout << "Ei voi tallettaa negatiivista summaa" << endl;
        return false;
    }

    else
    {
        cout << "Talletettiin " << maara << endl;
        saldo += maara;
        return true;
    }
}

bool Pankkitili::withdraw(double maara)
{
    if (maara < 0)
    {
        cout << "Negatiivista summaa ei voi nostaa" << endl;
        return false;
    }
    else if(maara > saldo)
    {
        cout << "Saldo ei riittävästi" << endl;
        return false;
    }
    else
    {
        saldo -= maara;
        return true;
    }

}

