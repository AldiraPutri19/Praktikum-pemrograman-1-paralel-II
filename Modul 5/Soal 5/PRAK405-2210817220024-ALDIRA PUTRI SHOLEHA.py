angka, baris = input().split()
angka = int(angka)
baris = int(baris)
h = 0
h2 = 0
h3 = 0
i = 0
while i < angka:
    i += 1
    j = i
    if i == 0:
        break
    while j > 0:
        j -= 1
        print("(%d * %d)" % (j + 1, baris), end=' ')
        if j > 0:
            print(" + ", end=' ')
    h = i * baris
    h2 += h
    print(" = %d" % (h2))
    h3 += h2
print("%d"%(h3))
