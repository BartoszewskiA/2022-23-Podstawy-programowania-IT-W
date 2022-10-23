#include <iostream>

using namespace std;

int main()
{
    int nr;
    cout << "Podaj nume dnia tygodnia: ";
    cin >> nr;
    switch (nr)
    {
    case 1:
        cout << "Ni";
        break;
    case 2:
        cout << "Pn";
        break;
    case 3:
        cout << "Wt";
        break;
    case 4:
        cout << "Sr";
        break;
    case 5:
        cout << "Czw";
        break;
    case 6:
        cout << "Pi";
        break;
    default:
        cout << "So";
        break;
    }
    return 0;
}