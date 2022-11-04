#include <iostream>

using namespace std;

int main()
{
    const int DL = 100;
    int tab[DL] ={0};
    int n;
    cout << "Ile liczb wczytac? ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "x=";
        cin >> tab[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    return 0;
}