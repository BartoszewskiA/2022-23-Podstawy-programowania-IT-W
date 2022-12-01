#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("wynik.txt",ios::out);
    plik<<"tekst zapisany przez program"<<endl;
    plik.close();
    return 0;
}