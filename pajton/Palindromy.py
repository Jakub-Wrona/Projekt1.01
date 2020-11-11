

def czy_palindrom(wyraz):
    if wyraz == wyraz[::-1]: #porównuje zmienną do jej odwrotności, [::] zwraca inkeksy od początku do końca, -1 to ich odwrotność
        return True
    else:
        return False


def main(args):

    wyraz = input("Podaj wyraz: ")
    print(wyraz)

    if (czy_palindrom(wyraz) == True):
        print("To palindrom")
    else:
        print("To nie jest palindrom!")



if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))