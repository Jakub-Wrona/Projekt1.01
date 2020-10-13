def main(args):

    n = int(input("Podaj pierwsza liczbe: "))
    m = int(input("Podaj ostatnia liczbe: "))

    for i in range(n, m): # zakres od n do m
        if i > 9 and i < 100: # liczby 2 cyfrowe
             if i % 3 == 0: # podzielne przez 3
                print(i, end=" ")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

