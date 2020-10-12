/*
 * funkcje04.cpp
 * 
 * Copyright 2020  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

using namespace std;

int lata = 0;
int staz = 0;
int zarobek = 1000;

void drukuj(){
	
	
	cout << "Pracujesz " << staz << "lat i zarabiasz " 
	<< zarobek*lata << endl;
	
	
	}
void awans(){
	staz += 1;
	zarobek *=1.1;
	
	}
int main(int argc, char **argv)
{
 
	cout << "Ile bedzie pracować!?" << endl;
	cin >> lata;
	staz = lata;
	drukuj();
	awans();
	cout << endl << "A za rok: " << endl;
	drukuj();
	return 0;
}

