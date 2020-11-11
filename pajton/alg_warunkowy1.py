

def main(args):

    liczba = int(input("Podaj ilosc zdobytych punktow: "))

    if liczba < 0 or liczba > 60:
        print("bledna wartosc")
    elif liczba < 20:
        print("podstawowa")
    elif liczba <= 40:
        print("sredniozaawansowana")
    else:
        print("zaawansowana") 

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
