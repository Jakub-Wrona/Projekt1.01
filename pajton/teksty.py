
def main(args):


    
    litera = "z"
    znaki = input("podaj tekst")
    print(znaki[len(znaki) - 1])
    print(znaki[-1])
    for znak in znaki:
        print(ord(znak))
    print(chr(65))
    return 0    




if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
