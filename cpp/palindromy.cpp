#include <iostream>
using namespace std;

bool czy_palindrom(char wyraz[]){

    int r = zlicz_znaki(wyraz);
    bool czyp = true;
    for (int i = 0; i < r / 2 ; i++) {
        if (wyraz[i] != wyraz[r - 1 - i]){
            czyp = false;
            break;
        }        
    }
    return czyp;
}
int zlicz_znaki(char t[]){
    int i = 0;
    while (t[i] != '\0'){
        i++;
    }
    return i;
}
int main(int argc, char ** argv)
{
    int r = 10;
    char wyraz[r];
    cout << "Podaj wyraz:";
    cin.getline(wyraz, r);

    if (czy_palindrom(wyraz)) cout << "To palindrom!";
    else cout << "To nie jest palindrom!";
    cout << endl;

    return 0;

}
