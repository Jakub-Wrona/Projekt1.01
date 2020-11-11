#include <iostream>
using namespace std;


void drukuj(int a, int b){
	
	
	cout << "Pracujesz " << a << " lat(a) i zarabiasz " 
	<< b*a << " zł" << endl;
	
}
void awans(int& d, int& e){
	d += 1;
	e *=1.1;
}
int main(int argc, char **argv)
{
	int lata;
	int staz = 1;
	int zarobek = 1000;
	cout << "Wynikiem działania programu jest infromacja o wysokości zarobków pracownika po podanym okresie stażu." << endl; 
	cout << "Ile lat będziesz pracować?" << endl;
	cin >> lata;
	staz = lata;
	drukuj(staz, zarobek);
	awans(staz, zarobek);
	cout << endl << "Po roku: " << endl;
	drukuj(staz, zarobek);
	return 0;
}

