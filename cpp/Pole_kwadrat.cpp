

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int bok; // deklaracja zmiennej
	int pole;
	
	bok = 0;
	pole = 0;
	
	cout << "Podaj bok kadratu: ";
	cin >> bok;
	pole = bok * bok;
	cout << "Pole: " << pole;
	
	return 0;
}

