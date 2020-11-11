#include <iostream>
#include <algorithm>

using namespace std;

    unsigned int n;
    int tab;
    double suma = 0;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    int a6 = 0;
 
void dane(){

     if (tab == 1){
        a1 = a1 + 1;
    }
    else if (tab == 2){
        a2 = a2 +1;
    }
     else if (tab == 3){
        a3 = a3 +1;
    }
     else if (tab == 4){
        a4 = a4 +1;
    }
     else if (tab == 5){
        a5 = a5 +1;
    }
     else if (tab == 6){
        a6 = a6 +1;
    }
}

void oceny(){
     cout << "Ilość 1: " << a1 << endl;
     cout << "Ilość 2: " << a2 << endl;
     cout << "Ilość 3: " << a3 << endl;
     cout << "Ilość 4: " << a4 << endl;
     cout << "Ilość 5: " << a5 << endl;
     cout << "Ilość 6: " << a6 << endl;

}

double srednia(){
    
	suma = 1*a1 + 2*a2 + 3*a3 + 4*a4 + 5*a5 + 6*a6;
    n = a1 + a2 + a3 + a4 + a5 + a6;

    cout<<"Średnia "<<n<<" liczb wynosi: "<<suma/n<<endl;

}

    double mediana(double* tab, int n) {
	sort(tab, tab + n);
	if (n % 2 == 0) {
		return (tab[n / 2 - 1] + tab[n / 2]) / 2;
	} else {
		return tab[(n - 1) / 2];
	}
}


int main(int argc, char **argv)
{
    for(n = 0; n < 20; n++ ){
        double* tab = new double[n];
        cout << "Podaj wartość od 1 do 6 (-1 kończy wprowadzanie) " << endl;
        cin>>tab[n];
        
        if(tab[n] > 0 && tab[n] < 7 ){
            dane();
        }
        else if(tab[n] == -1){
            cout << tab[n] << endl;
            oceny();
            srednia();
            cout << "Mediana wynosi: " << mediana(tab, n) << endl;
            break;
        
            
        }
        else{
        n = n - 1;
        cout << "Błędna wartość";
        }
    }
}