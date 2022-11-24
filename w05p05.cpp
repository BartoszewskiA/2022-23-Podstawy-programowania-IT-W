#include <iostream>

using namespace std;

int funkcja();
int main()
{
    cout << funkcja() << endl;
    cout << funkcja() << endl;
    cout << funkcja();
    return 0;
}

int funkcja()
{
    static int ile = 0;
    ile++;
    return ile;
}