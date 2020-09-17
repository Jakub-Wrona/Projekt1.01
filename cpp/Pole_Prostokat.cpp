

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int bok1;
	int bok2;
	int pole;
	int obw;
	
	bok1 = 0;
	bok2 = 0;
	pole = 0;
	obw = 0;
	
	cout << "Podaj 1. bok prostokąta: ";
	cin >> bok1;
	
	cout << "Podaj 2. bok prostokąta: ";
	cin >> bok2;
	
	pole = bok1 * bok2;
	cout << "Pole: " << pole << std::endl; 
	
	obw = 2 * bok1 + 2 * bok2;
	cout << "Obwód: " << obw;
	
	
	
	return 0;
}

