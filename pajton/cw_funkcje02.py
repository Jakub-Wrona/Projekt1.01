

def srednia(a):
   suma = sum(a)
   return suma / float(len(a))


def mediana(b):

    b = sorted(b)
    if  len(b) % 2 == 0:
        pol = int(len(b) / 2)
        return float(sum(b[pol - 1:pol + 1])) / 2.0
    else:
        return b[int(len(b) / 2)]

def oceny(c):
    for i in c:
        licznik = c.count(i)
        print("Ocena", i, "występuje", licznik, "razy")
    return 0


def main(args):

    n = int(input("Podaj ilość ocen: "))
    m = n
    if n <20 and n>0:
      lista = []
      i = 1
      while i < m + 1:
        liczby = int(input("Podaj oceny: "))
        if liczby > 0 and liczby < 7:
          lista.append(liczby)
          i += 1
        else:
          print("Błędna wartość!")
      print("Średnia wynosi", srednia(lista))
      print("Mediana wynosi:",mediana(lista)) 
      oceny(lista)

    else:
      print("Błędna wartość!")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
