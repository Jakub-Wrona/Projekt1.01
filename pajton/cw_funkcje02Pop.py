

def srednia(oceny):
   print("Średnia wynosi: ",sum(oceny))


def mediana(oceny):
    oceny = sorted(oceny)
    ile = len(oceny)
    if ile % 2 == 0:
        indeks = int(ile / 2)
        mediana = (oceny[indeks] + oceny[indeks - 1]) / 2
        pass
    else:
        mediana = oceny[int(ile / 2)]
    
     

def oceny(c):
    for i in c:
        licznik = c.count(i)
        print("Ocena", i, "występuje", licznik, "razy")
    return 0


def main(args):

    ile = 20
    oceny = []
    ocenyile = [0, 0, 0, 0, 0, 0, 0]
    while ile > 0:
        ocena = int(input("Podaj ocenę lub zero, aby zakończyć: "))
        if ocena > 0 and ocena < 7:
            oceny.append(ocena)
            ocenyile[ocena] += 1
            ile -= 1
        elif ocena == 0:
            break
        else:
            print("Błędna wartość")

    for i in range(1,7):
            print(f"Ocen {i} {ocenyile[i]}:")
    srednia(oceny)
    mediana(oceny)

        

    else:
      print("Błędna wartość!")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
