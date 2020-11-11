
#include <iostream>
#include <algorithm>

using namespace std;


int suma = 0;

double mediana(double* tab, int n) {
	sort(tab, tab + n);
	if (n % 2 == 0) {
		return (tab[n / 2 - 1] + tab[n / 2]) / 2;
	} else {
		return tab[(n - 1) / 2];
	}
}

double srednia(int tab, int n){
    suma =

}



int main () {
	int n;
	cout << "Podaj ile elementow ma tablica\nn = ";
	cin >> n;
	double* tab = new double[n];
	cout << "Podaj elementy:\n";
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	cout << "Mediana wynosi: " << mediana(tab, n) << endl;
	system("pause");
	return 0;
}