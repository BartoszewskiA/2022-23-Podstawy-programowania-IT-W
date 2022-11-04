#include <iostream>

using namespace std;

int main()
{
    int x, suma = 0;
    do
    {
        cout << "x=";
        cin >> x;
        if (x < 0)
            break;
        suma = suma + x;
    } while (1);

    cout << "suma=" << suma;
    return 0;
}