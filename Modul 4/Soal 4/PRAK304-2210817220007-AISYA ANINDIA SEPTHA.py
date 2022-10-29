for a in range (5) :
    b = int (input())
    if b > 99:
        print("Anda Menginput Melebihi Limit bilangan\n")
    elif b >= 20 :
        print("Puluhan\n")
    elif b >= 11 :
        print("Belasan\n")
    elif b == 10 :
        print("Puluhan\n")
    elif b >= 1 :
        print("Satuan\n")
    elif b == 0 :
        print("Nol\n")
