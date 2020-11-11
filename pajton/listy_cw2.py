


def pobierzLiczby(lista, lista2, n):
    
    while n > 0:
        ocena = int(input("Podaj liczbę z 1. serii: "))
        lista.append(ocena)
        n -= 1
    while n > -5:
        ocena2 = int(input("Podaj liczbę z 2. serii: "))
        lista2.append(ocena2)
        n -= 1

def suma1(lista):
    return sum(lista)

def suma2(lista2):
    return sum(lista2)

def main(args):

    n = 5
    lista = []
    lista2 = []

    pobierzLiczby(lista, lista2, n)

    print("Zawartość 1. listy:",lista)
    print("Zawartość 2. listy:",lista2)

    print("Suma 1. listy :", suma1(lista))
    print("Suma 2. listy :", suma2(lista2))

    Gsuma1 = suma1(lista)
    Gsuma2 = suma2(lista2)

    if Gsuma1 > Gsuma2:
        print("Lista 1. jest większa1")
    elif Gsuma1 < Gsuma2:
        print("Lista 2. jest większa!")
    else:
        print("Listy są równe!")

    return 0
 

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
