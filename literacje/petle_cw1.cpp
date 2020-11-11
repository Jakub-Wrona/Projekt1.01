<<<<<<< HEAD

/*1. Napisz program "petle_cw1.cpp", który pobiera liczby wprowadzane przez użytkownika,
aż do momentu, gdy ich suma przekroczy wartość 75.
Przed końcem program powinien wyświetlić sumę wprowadzonych liczb.*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

	int wynik = 0;
	cout << "Podaj liczby: " << endl;
	// wprowadzam liczby do momentu gdy ich suma przekroczy 75
	while (wynik < 75){
		int liczba = 0;
		cin >> liczba;
		wynik += liczba;
	}

	cout << wynik;
	
	return 0;
}

=======

/*1. Napisz program "petle_cw1.cpp", który pobiera liczby wprowadzane przez użytkownika,
aż do momentu, gdy ich suma przekroczy wartość 75.
Przed końcem program powinien wyświetlić sumę wprowadzonych liczb.*/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

	int wynik = 0;
	cout << "Podaj liczby: " << endl;
	// wprowadzam liczby do momentu gdy ich suma przekroczy 75
	while (wynik < 75){
		int liczba = 0;
		cin >> liczba;
		wynik += liczba;
	}

	cout << wynik;
	
	return 0;
}

>>>>>>> 0d8767295de9ba55e44e09eb39b372c314ff5f5b
