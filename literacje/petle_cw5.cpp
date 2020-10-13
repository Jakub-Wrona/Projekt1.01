#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int liczby;
    int licznik = 0;
    double srednia = 0;

    int liczba;

    // petla pobierajaca liczby od uzytkownika
    while(true)
    {
        cout << endl << "Wpisz liczbe numer " << licznik + 1 << ". Wpisz -1 aby zakonczyc wczytywanie. ";
        cin >> liczba;

        if (liczba < 0)
        {
            // koniec wczytywania jezeli wpisano -1
            break;
        }

        liczby[licznik] = liczba;
        licznik++; // zwieksza zmienna o 1
    }

    // oblicza srednia w petli
    for (int i = 0; i<licznik; i++)
    {
        srednia = srednia + liczby[i];
    }

    srednia = srednia / licznik;

    cout << "Srednia: " << srednia << endl;
	return 0;
}
