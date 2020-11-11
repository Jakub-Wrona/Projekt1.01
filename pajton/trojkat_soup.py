#! /usr/bin/env python
# -*- coding: UTF-8 -*-

# Program Prosi użytkownika o wprowadzenie 3 boków
# i sprawdza czy można z nich zbudować trójkąt

import math

odp = "t"

while odp != "n":

    a, b, c = int(input("Podaj 3 boki trójkąta (oddzielone enterem): ")), int(input()), int(input())

    # sprawdza czy można zbudować trójkąt
    if (a + b > c and a + c > b and b + c > a):
        print("Z podanych boków można zbudować trójkąt.")

        # sprawdza czy można zbudować trójkąt prostokątny
        if (a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2): 
            print("Do tego prostokątny!")

        else:
            print("Ale nie prostokątny!")

        # liczy obwód
        print("Obwód wynosi:", (a + b + c))

        # oblicza pole bez znajomości wysokości
        p = 0.5 * (a + b + c)
        P = math.sqrt(p * (p - a) * (p - b) * (p - c))
                
        print("Pole wynosi:", P ) 

        odp = "n"

    else:
        print("Z podanych odcinków nie można utworzyć trójkąta.")
    odp = input("Spróbujesz jeszcze raz (t/n): ")

    if(odp == "n"):
        print("Do zobaczenia...")