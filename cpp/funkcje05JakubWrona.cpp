#include <iostream>
#include <algorithm>

using namespace std;

 
void dane(int liczba, int& a1,int& a2, int& a3, int& a4, int& a5, int& a6){

     if (liczba == 1){
        a1 = a1 + 1;
    }
    else if (liczba == 2){  
        a2 = a2 +1;
    }
     else if (liczba == 3){
        a3 = a3 +1;
    }
     else if (liczba == 4){
        a4 = a4 +1;
    }
     else if (liczba == 5){
        a5 = a5 +1;
    }
     else if (liczba == 6){
        a6 = a6 +1;
    }
}

void oceny(int a1,int a2, int a3, int a4, int a5, int a6){
     cout << "Ilość 1: " << a1 << endl;
     cout << "Ilość 2: " << a2 << endl;
     cout << "Ilość 3: " << a3 << endl;
     cout << "Ilość 4: " << a4 << endl;
     cout << "Ilość 5: " << a5 << endl;
     cout << "Ilość 6: " << a6 << endl;

}

double srednia(int a1,int a2, int a3, int a4, int a5, int a6, int n){
    
    double suma = 0;
	suma = 1*a1 + 2*a2 + 3*a3 + 4*a4 + 5*a5 + 6*a6;
    n = a1 + a2 + a3 + a4 + a5 + a6;

    cout<<"Średnia "<<n<<" liczb wynosi: "<<suma/n<<endl;

}

/*double mediana(double* tab, int n) {
	sort(tab, tab + n);
	if (n % 2 == 0) {
		return (tab[n / 2 - 1] + tab[n / 2]) / 2;
	} else {
		return tab[(n - 1) / 2];
	}
}
*/

int main(int argc, char **argv)
{
    int liczba;
    unsigned int n;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    int a6 = 0;

    for(n = 0; n < 20; n++ ){
        // double* tab = new double[n];
        cout << "Podaj wartość od 1 do 6 (-1 kończy wprowadzanie) " << endl;
        cin>>liczba;
        
        if(liczba > 0 && liczba < 7 ){
            dane(liczba, a1, a2, a3, a4, a5, a6);
        }
        else if(liczba == -1){
            // cout << tab[n] << endl;
            oceny(a1, a2, a3, a4, a5, a6);
            srednia(a1, a2, a3, a4, a5, a6, n);
            // cout << "Mediana wynosi: " << mediana(tab, n) << endl;
            break;
        
            
        }
        else{
        n = n - 1;
        cout << "Błędna wartość";
        }
    }
}