/*
 * czy_parzysta.cpp
 * 
napisz profram który pobiera 3 liczby drukuje największą
 * 
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int liczba1;
	int liczba2;
	int liczba3;
	
	liczba1 = 0;
	liczba2 = 0;
	liczba3 = 0;
	
	cout  << "Podaj 1. liczbę ";
	cin >> liczba1;
	
	cout  << "Podaj 2. liczbę ";
	cin >> liczba2;
	
	cout  << "Podaj 3. liczbę ";
	cin >> liczba3;
	
	if (liczba1 > liczba2 && liczba1 > liczba3) {
		cout << "Liczba " << liczba1 << " jest największa!";
	}
	else if (liczba2 > liczba1 && liczba2 > liczba3) {
		cout << "Liczba " << liczba2 << " jest największa!";
		
		}
	
	else if (liczba3 > liczba1 && liczba3 > liczba2) {
		cout << "Liczba " << liczba3 << " jest największa!";
		}
	else  {
		cout << "nie ma najwiekszej!";
	}
	
	return 0;
}

