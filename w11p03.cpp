#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    // int tab[1000];
    srand(time(NULL));
    long ile;
    cout << "ile liczb: ";
    cin >> ile;
    int czas = time(NULL);
    int *tab = new int[ile];
    for (int i = 0; i < ile; i++)
        tab[i] = rand() % 101;
    cout << time(NULL) - czas << "  " << tab[ile - 1];
    // for (int i = 0; i < ile; i++)
    //     cout << tab[i] << " ";
    delete [] tab;
    return 0;
}