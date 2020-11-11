
/*
Program pobiera dane od użytkownika i liczy na ich podstawie
ilość pieniędzy zaoszczędzonych dzięki lokacie
*/

#include <iostream>
#include <math.h>
using namespace std;

void oprocentowanie  (float &lokata, float procent, int okres)   {

    float procentmies = procent/12/100; // przeliczenie oprocentowania na miesięczny

    for (int i=0; i < okres; i++)
    {
        lokata += lokata * procentmies; // dodanie odsetek
    }
}

int main(int argc, char **argv) {

    float kapital = 0;
    float procent = 0;
    float lokata = 0;
    int okres = 0;

    cout << "Podaj kapitał początkowy: ";
    cin >> kapital;

    cout << "Podaj oprocentowanie w skali roku: ";
    cin >> procent;

    cout << "Podaj okres oszczędzania (liczbę miesięcy): ";
    cin >> okres;

    lokata = kapital;

    oprocentowanie(lokata, procent, okres);

    cout << "W ciągu " << okres 
    << " miesięcy przy kapitale początkowym " << kapital << " zł" << endl
    << "i oprocentowaniu miesięcznym "<< procent / 12 << "%" << endl
    << "zaoszczędzisz: " << lokata << " zł";

	return 0;
}