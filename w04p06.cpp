#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int numer;
    int tab[48]; // indeks 0 nie bedzie wyorzystany
    for (int i = 0; i < 48; i++)
        tab[i] = 1;

    for (int i = 0; i < 6; i++)
    {
        do
        {
            numer = rand() % 47 + 1;
        } while (tab[numer] == 0);
        tab[numer] = 0;
        cout << numer<<" ";
    }
    return 0;
}