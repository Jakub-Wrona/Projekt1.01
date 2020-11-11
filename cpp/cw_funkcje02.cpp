#include <iostream>
#include <algorithm>
using namespace std;


double srednia(int suma, int n){
    suma = suma / n;
    return suma;

}

double mediana(int* liczba, int n){
    sort(liczba, liczba + n);
    if (n % 2 == 0) {
        return (liczba[n / 2 - 1] + liczba[n / 2]) / 2;
    } 
    else {
        return liczba[(n) / 2 ];

    }

}

void oceny(int* liczba, int n){
    
    cout << "Ocena 1 występuje " << count( liczba, liczba + n, 1 ) << " razy" << endl;
    cout << "Ocena 2 występuje " << count( liczba, liczba + n, 2 ) << " razy" << endl;
    cout << "Ocena 3 występuje " << count( liczba, liczba + n, 3 ) << " razy" << endl;
    cout << "Ocena 4 występuje " << count( liczba, liczba + n, 4 ) << " razy" << endl;
    cout << "Ocena 5 występuje " << count( liczba, liczba + n, 5 ) << " razy" << endl;
    cout << "Ocena 6 występuje " << count( liczba, liczba + n, 6 ) << " razy" << endl;
}

int main(int argc, char **argv){

    int n;
    double suma;
    cout << "Podaj ilość ocen: "<< endl;
    cin >> n;
    if( n > 0 && n < 20){
        int * liczba = new int[n];
        cout << "Podaj oceny (Prawidłowe oceny to 1,2,3,4,5,6 ):" << endl;
        for (int i = 0; i < n; i++){
            cin >> liczba[i];
            if (liczba[i] < 1 || liczba[i] > 6){
                cout << "Podałeś złą wartość!";
                return 0;
            }  
            suma += liczba[i];
        }
        cout << "Mediana wynosi: " << mediana(liczba, n) << endl;
        cout << "Średnia wynosi: " << srednia(suma, n) << endl;
        oceny(liczba, n);
    }
    else {
        cout << "błędna wartość!";
    }



}