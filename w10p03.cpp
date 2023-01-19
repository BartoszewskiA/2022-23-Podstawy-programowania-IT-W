#include <iostream>
#include <time.h>

using namespace std;

struct RGB
{
    int R;
    int G;
    int B;
};

RGB losuj();

int main()
{
    srand(time(NULL));
    RGB losowy_kolor = losuj();
    cout << "R=" << losowy_kolor.R << " "
         << "G=" << losowy_kolor.G << " "
         << "B=" << losowy_kolor.B;
    return 0;
}

RGB losuj()
{
    // int r = rand() % 256;
    // int g = rand() % 256;
    // int b = rand() % 256;
    RGB wynik;
    wynik.R = rand() % 256;
    wynik.G = rand() % 256;
    wynik.B = rand() % 256;
    return wynik;
}