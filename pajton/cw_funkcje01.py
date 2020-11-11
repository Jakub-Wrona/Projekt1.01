

def drukuj(a, b):

    print("Pracujesz",a , "lat(a) i zarabiasz" , a*b , "zł")
    

def awans(c, d):
    c = c + 1
    d *= 1.1
    return (c, d)
    
def main(args):

    zarobek = 1000
    lata = int(input("Ile lat będziesz pracować? "))
    staz = lata

    drukuj(staz, zarobek)
    staz, zarobek = awans(staz, zarobek)
    print("Po roku: ")
    drukuj(staz, zarobek)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
