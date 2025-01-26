#include "ItalianChef.h"

using namespace std;

ItalianChef::ItalianChef(string s)
{
    chefName = s;
    cout << "Kokki nimelta " << chefName << " luotu" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << chefName << " poistettu onnistuneesti" << endl;
}


int ItalianChef::makepizza(int a, int b)
{
    water = a / 5;
    flour = b / 5;
    if (water < flour)
    {
        return water;
    }
    else
    {
        return flour;
    }
}
bool ItalianChef::askSecret(string s, int a, int b)
{
    if (s == password)
    {


       cout << makepizza(a, b) << endl;
        return true;
    }
    else
    {
        return false;
    }
}


