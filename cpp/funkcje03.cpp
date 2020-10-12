

#include <iostream>

using namespace std;

int a = 0;
int b = 0;

void sumuj(int a, int b){
	a = 10;
	
	int suma = a + b;
	cout << "Suma: " << suma << endl;
}
void sumuj2(int &a, int b){
	a = 20;
	cout << &a << end;
	int suma = a + b;
	cout << "Suma: " << suma << endl;
	
	
	}

int main(int argc, char **argv)
{
	
	int a = 0;
	int b = 0;
	cout << "Podaj liczby: " << endl;
	cin >> a;
	cin >> b;
	
	sumuj(a, b);
	cout << &a << endl;
	cout << "a= " << a << endl;
	return 0;
}

