#include "Luottotili.h"



Luottotili::Luottotili(string nimi, double d) :Pankkitili(nimi)
{
    omistaja = nimi;
    cout << "Luottotili avattu nimella " << omistaja << endl;
    cout << "Luottoraja on " << d << endl;
    luottoRaja = d;
    luottoRaja = -luottoRaja;
}


bool Luottotili::deposit(double maara)
{
    if(maara <= 0) // summa ei saa olla negatiivinen
    {
        cout << "Laittamasi summa on virheellinen" << endl;
        return false;
    }

    else if(saldo >= 0)
    {
        cout << "Ei velkaa maksettavana" << endl;
        return false;
    }

    maara = -maara; // ei toimi ilman tätä

    if(maara < saldo) //jos määrä on "suurempi" kuin velka(saldo), saldo menisi nollan yli
    {
        cout << "Laittamasi summa on enemmän kuin velka" << endl;
        return false;
    }
    else
    {
        saldo -= maara;
        return true;
    }
}

bool Luottotili::withdraw(double maara)
{
    if (maara < 0)
    {
        cout << "Negatiivista summaa ei voi nostaa" << endl;
        return false;
    }

    maara = -maara;

    if((maara + saldo) < luottoRaja )
    {
        cout << "Luottoraja ylitetty" << endl;
        return false;
    }
    else
    {
        saldo += maara;
        return true;
    }
}
