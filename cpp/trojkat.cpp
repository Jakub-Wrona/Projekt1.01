/*
 * 
 * 
 * sprawdzanie czy można zbudować trójkąt
 * na końcu wyprowadź odpowiedni komunikat np. da się "nie da się"
 * 
 * 
 * 
 * 
 * 
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int bokA;
	int bokB;
	int bokC;
	
	bokA = 0;
	bokB = 0;
	bokC = 0;
	
	cout  << "Podaj pierwszy bok ";
	cin >> bokA;
	
	cout  << "Podaj drugi bok ";
	cin >> bokB;
	
	cout << "Podaj trzeci bok ";
	cin >> bokC;
	/*
 
	if (bokA + bokB > bokC) {
		if (bokA + bokC > bokB) {
			if (bokB + bokC > bokA) {
				cout << "da się";
				
			}else {
					cout << "nie da się";
				}	
		}else {
				cout << "nie da się";
			}
	} else {
			cout << "nie da się";
		}
		*/	
	
	
	
	return 0;
}

