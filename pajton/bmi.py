
def main(args):

    waga =  int(input("Podaj wage: "))
    wzrost = int(input("Podaj wzrost: "))
    bmi = 0 

    bmi = waga / ((wzrost * 0.01) * (wzrost * 0.01))

    if bmi < 0:
        print("blad", bmi)
    elif bmi >= 0 and bmi < 18.5:
        print("niedowaga", bmi ) 
    elif bmi >= 18.5 and bmi < 25:
        print("normka", bmi)   
    elif bmi >= 25 and bmi < 30:
        print("nadwaga", bmi) 
    else:
        print("otylosc", bmi)
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
