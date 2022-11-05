a = 1
while a != 3 :
    print("Pilih Program!\n")
    print("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n")
    p = int (input("Masukkan Pilihan : "))
    
    if p == 1 :
        s = float (input("Masukkan nilai pertama : "))
        d = float (input ("Masukkan nilai kedua : "))
        b = s+d
        print("Hasil penjumlahan antara %.2f" %s, "dengan %.2f" %d, "adalah %.2f\n" %b)
    elif p == 2 :
        s = float (input("Masukkan nilai pertama : "))
        d = float (input ("Masukkan nilai kedua : "))
        b = s-d
        print("Hasil pengurangan antara %.2f" %s, "dengan %.2f" %d, "adalah %.2f\n" %b)
    elif p == 3 :
        s = float (input("Masukkan nilai pertama : "))
        d = float (input ("Masukkan nilai kedua : "))
        b = s*d
        print("Hasil perkalian antara %.2f" %s, "dengan %.2f" %d, "adalah %.2f\n" %b)
    elif p == 4 :
        s = float (input("Masukkan nilai pertama : "))
        d = float (input ("Masukkan nilai kedua : "))
        b = s/d
        print("Hasil penjumlahan antara %.2f" %s, "dengan %.2f" %d, "adalah %.2f\n" %b) 
    elif p == 5 :
        print("Terimakasih, telah menggunakan kalkulator Aisya Anindia Septha\n")
        break 
    else :
        print("Input anda salah, silahkan coba lagi\n")