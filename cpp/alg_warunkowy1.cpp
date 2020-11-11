

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int w;
	
	w = 0;
	
	cout << "Ilość zdobytych punktów...";
	cin >> w;
	
	if (w < 0 || w > 60) {
		cout << "Błędna wartość";
		return 0;
	}
	
	if (w < 20){
		cout << "podstawowa";
	}
		
	else if (w <=40 ){
		cout << "średniozaawandowana";
	}
		
	else{
		 cout << "zaawansowana";
	}
	
	return 0;
}

