#include "Chef.h"

using namespace std;

Chef::Chef(string s)
{
    chefName = s;
    cout << "Kokki nimelta " << chefName << " luotu" << endl;
}

Chef::~Chef()
{
    cout << chefName << " poistettu onnistuneesti" << endl;
}

string Chef::getName()
{

    return chefName;
}

int Chef::makeSalad(int a)
{
    return a / 5;
}

int Chef::makeSoup(int a)
{
    return a / 3;
}
