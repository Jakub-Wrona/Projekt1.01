#include <iostream>
using namespace std;

void pobierzLiczby(int tab1[], int tab2[], int n)
{
    int ocena = 0;
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe z 1. serii: ";
        cin >> ocena;
        tab1[i] = ocena;
    }
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe z 2. serii: ";
        cin >> ocena;
        tab2[i] = ocena;
    }
}
int suma1(int tab1[], int n)
{
    int i;

    int suma;
    suma = 0;

    for(i = 0; i < n; i++) {
        suma = suma + tab1[i];
    }
    return suma;
}
int suma2(int tab2[], int n)
{
    int i;

    int suma;
    suma = 0;

    for(i = 0; i < n; i++) {
        suma = suma + tab2[i];
    }
    return suma;
}
int wieksza( int suma1, int suma2)
{
    
    if(suma1 > suma2) {
        return 1;
    }
    else if (suma1 < suma2) {
        return 2;
    }
    else {
        return 0;
    }
    


}
int main(int argc, char ** argv)
{
    int n = 5;
    
    int tab1[n];
    int tab2[n];

    pobierzLiczby(tab1, tab2, n);

    cout << "Suma pierwszej tablicy: " << suma1(tab1, n) << endl;
    cout << "Suma drugiej tablicy: " << suma2(tab2, n) << endl;

    if (wieksza(suma1(tab1, n), suma2(tab2, n)) == 0) {
        cout << "Tablice są równe!";
    }
    else {
    cout << "Tablica " << wieksza(suma1(tab1, n), suma2(tab2, n)) << ". jest większa!"; 
    }

    return 0;

}