<<<<<<< HEAD

/*5. Napisz program "petle_cw5.cpp", który pobiera od użytkownika określoną przez niego liczbę ocen,
 a następnie oblicza i drukuje ich średnią.*/


#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

	double suma = 0, //zmienna przechowuje sumę liczb 
	liczba; //zmienna przechowuje kolejne liczby podawane z klawiatury
	unsigned int n; //zmienna odpowiedzialna za ilość liczb podanych z klawiatury

	cout<<"Z jakiej ilości liczb chcesz liczyć średnią arytmetyczną: ";
	cin>>n;
	
	cout<<endl;

	if(n>0) //średnią arytmetyczną można wyznaczać tylko z dodatniej ilości liczb
	{
		for(int i = 1;i<= n;i++)
		{
			cout<<"Podaj "<<i<<" liczbę: ";
			cin>>liczba;
			suma+=liczba; 
		}
		cout<<"Średnia "<<n<<" liczb wynosi: "<<suma/n<<endl;
	}
	else{
		cout<<"Podałeś nieprawidłową wartość zmiennej n"<<endl;
	}
	return 0;
}
=======

/*5. Napisz program "petle_cw5.cpp", który pobiera od użytkownika określoną przez niego liczbę ocen,
 a następnie oblicza i drukuje ich średnią.*/


#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

	double suma = 0, //zmienna przechowuje sumę liczb 
	liczba; //zmienna przechowuje kolejne liczby podawane z klawiatury
	unsigned int n; //zmienna odpowiedzialna za ilość liczb podanych z klawiatury

	cout<<"Z jakiej ilości liczb chcesz liczyć średnią arytmetyczną: ";
	cin>>n;
	
	cout<<endl;

	if(n>0) //średnią arytmetyczną można wyznaczać tylko z dodatniej ilości liczb
	{
		for(int i = 1;i<= n;i++)
		{
			cout<<"Podaj "<<i<<" liczbę: ";
			cin>>liczba;
			suma+=liczba;
		}
		cout<<"Średnia "<<n<<" liczb wynosi: "<<suma/n<<endl;
	}
	else
		cout<<"Podałeś nieprawidłową wartość zmiennej n"<<endl;

	return 0;
}
>>>>>>> 0d8767295de9ba55e44e09eb39b372c314ff5f5b
