def main(args):

    liczba = 1
    licznik = 0

    while liczba >  0:

        liczba = int(input("Podaj liczbę (Liczba 0 konczy petle): "))
        
        # czy jest nieparzysta
        if liczba % 2 != 0: 
            # zwiekszamy licznik o 1
            licznik = licznik + 1

        # wyjscie z petli
        elif liczba == 0: 
            break

    print("Ilosc liczb nieparzystych: ", licznik)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
