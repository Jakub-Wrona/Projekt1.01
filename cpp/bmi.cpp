#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int waga;
    int wzrost;
    int bmi;

	waga = 0;
	wzrost = 0;
	

	cout  << "Podaj wage: ";
	cin >> waga;
	
    cout << "Podaj wzrost";
    cin >> wzrost;

    bmi = waga / (( wzrost * 0.01 ) * ( wzrost * 0.01));


	if (bmi < 0) {
		cout << "blad" << bmi;
		return 0;
	}

	else if (bmi >= 0 && bmi < 18.5) {
		cout << "niedowaga" << bmi;
	}
	else if (bmi >= 18.5 && bmi < 25 ) {
		cout << "normka" << bmi;
		}
    else if (bmi >= 25 && bmi < 30 ) {
		cout << "nadwaga" << bmi;
		}
    else  {
		cout << "otylosc" << bmi;
		}
	
	return 0;
}

