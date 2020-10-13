#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int wynik = 0;

	// wprowadzam liczby do momentu gdy ich suma przekroczy 75
	while (wynik < 75){
		int liczba = 0;
		cin >> liczba;
		wynik += liczba;
	}

	cout << wynik;
	
	return 0;
}

