#include <iostream>
#include <cstdlib>

using namespace std;

int game(int maxnum);

int game(int maxnum)
{
    srand(200);
    int maara = 0;
    int luku = rand() % maxnum;
    int arvaus;
    //2. kysytään pelaajalta arvaus
    while (true)
    {

        cout << "Arvaa luku 1-" << maxnum << endl;
        cin >> arvaus;
        //3. Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku

        /*4. Kerrotaan tarkistuksen tulos tyyliin
        ”luku on pienempi/suurempi” tai ”oikea vastaus”*/

        //3. Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.

        maara++;
        if(arvaus > luku)
        {
            cout << "luku on pienempi" << endl;
            continue;
        }

        if(arvaus < luku)
        {
            cout << "luku on suurempi" << endl;
            continue;
        }
        if(arvaus == luku)
        {
            cout << "oikea vastaus" << endl;
            break;
        }

    }


    return maara;
}



int main()
{
    cout << game(20) << " yritysta" << endl;


    return 0;
}
