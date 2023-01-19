#include <iostream>
#include <string>
#include <time.h>

using namespace std;

// 0 - puste pole       ->1
// 1 - pudlo            --
// 2 - odkryty statek   ->3
// 3 - trafiony statek  --
// 7 - ukryty statek    ->3

int plansza[10][10];

// int plansza[10][10] = {
//     0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
//     7, 7, 0, 0, 0, 0, 0, 0, 0, 0,
//     0, 0, 0, 7, 0, 7, 7, 7, 0, 0,
//     0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
//     1, 0, 0, 2, 1, 0, 0, 0, 0, 0,
//     0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
//     0, 7, 0, 0, 0, 0, 7, 7, 7, 0,
//     0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
//     0, 7, 0, 0, 2, 3, 2, 7, 0, 0,
//     0, 7, 0, 0, 0, 0, 0, 0, 0, 0};

void rysuj_plansze(bool odkryj);
void strzal(string wiersz, int kolumna);
void sprawdz_sasiednie(int w, int k);
void wyczysc_plansze();
bool kolizja(int w, int k);
bool ustaw_statek_2(int w, int k, int kierunek);
bool sprawdz_koniec();

int main()
{

    srand(time(NULL));
    string wiersz;
    int kolumna;
    wyczysc_plansze();
    int ile = 0;
    do
    {
        if (ustaw_statek_2(rand() % 10, rand() % 10, rand() % 2))
            ile++;
    } while (ile < 6);

    rysuj_plansze(false);
    do
    {
        cout << "Podaj litere: ";
        cin >> wiersz;
        if (wiersz == "x" || sprawdz_koniec())
        {
            rysuj_plansze(true);
            return 0;
        }
        cout << "Podal cyfre: ";
        cin >> kolumna;
        strzal(wiersz, kolumna);
        rysuj_plansze(false);
    } while (1);

    return 0;
}

void strzal(string wiersz, int kolumna)
{
    char znak = wiersz[0];
    int w = (int)znak - 65;
    int k = kolumna - 1;
    switch (plansza[w][k])
    {
    case 0:
        plansza[w][k] = 1;
        break;
    case 2:
        plansza[w][k] = 3;
        break;
    case 7:
        plansza[w][k] = 3;
        break;
    }
    sprawdz_sasiednie(w, k);
}

void sprawdz_sasiednie(int w, int k)
{
    if (k < 9 && plansza[w][k + 1] == 7)
        plansza[w][k + 1] = 2;
    if (k > 0 && plansza[w][k - 1] == 7)
        plansza[w][k - 1] = 2;
    if (w < 9 && plansza[w + 1][k] == 7)
        plansza[w + 1][k] = 2;
    if (w > 0 && plansza[w - 1][k] == 7)
        plansza[w - 1][k] = 2;
}

void rysuj_plansze(bool odkryj)
{
    system("cls");
    cout << "   ";
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << (char)(i + 64) << " ";
        for (int j = 1; j <= 10; j++)
        {
            switch (plansza[i - 1][j - 1])
            {
            case 0:
                cout << "   ";
                break;
            case 1:
                cout << " * ";
                break;
            case 2:
                cout << (char)176 << (char)176 << (char)176;
                break;
            case 3:
                cout << (char)176 << '#' << (char)176;
                break;
            case 7:
                if (odkryj)
                    cout << (char)219 << (char)219 << (char)219;
                else
                    cout << "   ";
                break;
            }
        }
        cout << endl;
    }
}

void wyczysc_plansze()
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            plansza[i][j] = 0;
}

bool kolizja(int w, int k)
{
    if (plansza[w][k] != 0)
        return true;
    if (w < 0 || w > 9 || k < 0 || k > 9)
        return true;
    if (w > 0 && plansza[w - 1][k] != 0)
        return true;
    if (w < 9 && plansza[w + 1][k] != 0)
        return true;
    if (k > 0 && plansza[w][k - 1] != 0)
        return true;
    if (k < 9 && plansza[w][k + 1] != 0)
        return true;
    if (w > 0 && k > 0 && plansza[w - 1][k - 1] != 0)
        return true;
    if (w > 0 && k < 9 && plansza[w - 1][k + 1] != 0)
        return true;
    if (w < 9 && k > 0 && plansza[w + 1][k - 1] != 0)
        return true;
    if (w < 9 && k < 9 && plansza[w + 1][k + 1] != 0)
        return true;
    return false;
}

bool ustaw_statek_2(int w, int k, int kierunek)
{
    if (kierunek == 0 && !kolizja(w, k) && !kolizja(w, k + 1))
    {
        plansza[w][k] = 7;
        plansza[w][k + 1] = 7;
        return true;
    }
    if (kierunek == 1 && !kolizja(w, k) && !kolizja(w + 1, k))
    {
        plansza[w][k] = 7;
        plansza[w + 1][k] = 7;
        return true;
    }
    return false;
}

bool ustaw_statek_3(int w, int k, int kierunek)
{
    if (kierunek == 0 && !kolizja(w, k) && !kolizja(w, k + 1) && !kolizja(w, k + 2))
    {
        plansza[w][k] = 7;
        plansza[w][k + 1] = 7;
        plansza[w][k + 2] = 7;
        return true;
    }
    if (kierunek == 1 && !kolizja(w, k) && !kolizja(w + 1, k) && !kolizja(w + 2, k))
    {
        plansza[w][k] = 7;
        plansza[w + 1][k] = 7;
        plansza[w + 2][k] = 7;
        return true;
    }
    return false;
}

bool sprawdz_koniec()
{
    bool wynik = true;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if (plansza[i][j] == 7 || plansza[i][j] == 3)
                wynik = false;
    return wynik;
}
