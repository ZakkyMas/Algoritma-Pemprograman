print('\n\nProgram ini diajukan untuk memenuhi Tugas Algoritman & Pemprograman\n\n')
print('Name : Zakky Mizanulfikri Ash Sodiq')
print('NIM  : E11.2020.01094\n')

while True:
    try:
        mode = int(input('0 => Convert Celsius to Farentheit\n1 => Menghitung Luas Lingkaran\n2 => Menghitung Volume Tabung\nMode : '))
    except Exception:
        print('Tidak ada dalam list mode')
        continue
    
    if mode==0:
        try:
            print('Mode : Convert Celsius to Farentheit')
            print('Farentheit :', float(input('Celsius    : '))+273)
        except Exception:
            print('ERROR')
    elif mode==1:
        try:
            print('Mode : Menghitung Luas Lingkaran')
            r=float(input('Jari-Jari : '))
            print('Luas :', r*r*3.14)
        except Exception:
            print('ERROR')
    elif mode==2:
        try:
            print('Mode : Volume Tabung')
            r=float(input('Jari-Jari : '))
            t=float(input('Tinggi    : '))
            print('Volume :', r*r*3.14*t)
        except Exception:
            print('ERROR')
    else:
        print('Tidak ada dalam list mode')
    
    print('')