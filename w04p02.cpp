#include <iostream>

using namespace std;

int main()
{
    int tab[100];
    int poz = 0, temp;
    do
    {
        cout << "x=";
        cin >> temp;
        if (temp >= 0)
        {
            tab[poz] = temp;
            poz++;
        }
        else
            break;
    } while (1);

    for (int i = 0; i < poz; i++)
    {
        cout << tab[i] << " ";
    }
    return 0;
}