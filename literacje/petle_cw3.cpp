
/*3. Napisz program "petle_cw3.cpp", który wyświetla kwadraty kolejnych liczb naturalnych,
począwszy od zera a skończywszy na kwadracie liczby podanej przez użytkownika.*/

#include <iostream>
using namespace std;

int main()
{
    
    int m;

    cout << "Podaj liczbe koncowa: ";
    cin >> m;

    // wypisuje wszystkie kwadraty liczb naturalnych od 0 do zmiennej m 
    for (int i=0; i<=m; i++) cout<<" "<<i*i<<" ";

    return 0;
}