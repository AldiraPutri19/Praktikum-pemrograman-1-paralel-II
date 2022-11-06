angka = int(input())
for a in range (1, angka) :
    if a % 2 != 0 :
        print(a, end=' ')
print("\n")
while angka > 0 :
    if angka % 2 == 0 :
        print(angka, end=' ')
    angka -= 1