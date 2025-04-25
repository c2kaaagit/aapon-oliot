#include "chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    ItalianChef italiakokki("luigi");
    cout << italiakokki.makeSalad(23) << endl;
    cout << italiakokki.makeSoup(40) << endl;
    return 0;
}
