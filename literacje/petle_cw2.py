def main(args):

# drukuje napis i przypisuje liczby zmiennym z wartoscia bezwzgledna
n = abs(int(input("Podaj pierwsza liczbe: ")))
m = abs(int(input("Podaj ostatnia liczbe: ")))
    
# wypisuje wsyzstkie liczby z przedzialu <n,m> m+1 by wypisalo tez końcową liczbę end="" by drukowalo w jednej lini
for i in range(n, m + 1):
    print(i, end=" ")

return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

