#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    if (b != 0)
    {
        double d = (double)a / b;
        cout << "d=" << d;
    } 
    else
    {
        cout <<"nie dziel przez zero";
    }


    return 0;
}