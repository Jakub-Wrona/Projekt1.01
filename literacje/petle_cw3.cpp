#include <iostream>
using namespace std;

int main()
{
    
    int m;
    int k;

    cout << "Podaj liczbe koncowa";
    cin >> m;

    // wypisuje wszystkie kwadraty liczb naturalnych od 0 do zmiennej m 
    for (int i=0; i<=m; i++) cout<<" "<<i*i<<" ";

    return 0;
}