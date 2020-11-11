
#include <iostream>
using namespace std;


void pobierz1(char t[]) {
    cin >> t;
}

void pobierz2(char t[], int r) {
    cin.getline(t, r);
}

void drukuj1(char t[], int r){
    for (int i = 0; i < r; i++){
        cout << i << " " << t[i] << " " << (int)t[i] << endl;
    }
    cout << endl;
}

void drukuj2(char t[]){
    int i = 0;
    while (t[i] != '\0'){
        cout << t[i];
        i++;
    }
}

int zlicz_znaki(char t[]){
    int i = 0;
    while (t[i] != '\0'){
        cout << t[i];
        i++;
    }
    return i;
}

int main(int argc, char **argv)
{
    char znak = 'a';
    cout << (int)znak << endl;
    int kod = 65;
    cout << (char)kod << endl;

    int rozmiar = 10;
    char znaki[rozmiar];
    //pobierz1(znaki);
    //drukuj1(znaki, rozmiar);
    pobierz2(znaki, rozmiar);
    cout << "Wprowadzono " << zlicz_znaki(znaki) << "znaków!";

    return 0;
}