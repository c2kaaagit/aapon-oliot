#include "chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{

    ItalianChef kokki("luigi");
    cout << kokki.makeSalad(23) << endl;
    cout << kokki.makeSoup(40) << endl;
    return 0;
}
