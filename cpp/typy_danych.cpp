#include <iostream>
using namespace std;

int main(int argc, char **argv){

    short int a = 0;
    int b = 0;
    long int c = 0;

    cout << a << " " << sizeof(a) << endl;
    cout << b << " " << sizeof(b) << endl;
    cout << c << " " << sizeof(c) << endl;

    char z = 'a';
    cout << z << " " << (int)z << sizeof(z) << endl;

    float d =0;
    double e = 0;

    cout << d << " " << sizeof(d) << endl;
    cout << e << " " << sizeof(e) << endl;

    cout << "Użycie tablic: " << endl;

    int ile = 5;
    int tab[ile];
    for(int i = 0; i < ile; i++){
        cout << "Podaj " << i+1 << " liczbę ";
        cin >> tab[i];
    }
    cout << "Zawartość tablicy: " << endl;
    for(int i = 0; i < ile; i++){
        cout << "Indeks " << i << " Wartość: " << tab[i] << endl;
        
    }

    return 0;
}