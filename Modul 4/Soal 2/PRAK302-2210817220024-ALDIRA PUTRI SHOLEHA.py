nilai = int(input(""))
if(nilai >= 80) and (nilai <= 100):
    print("A")
elif (nilai >= 70) and (nilai <= 79):
    print("B")
elif (nilai >= 60) and (nilai <= 69):
    print("C")
elif (nilai >= 50) and (nilai <= 59):
    print("D")
elif (nilai >= 0) and (nilai <= 50):
    print("E")
else :
    print("nilai {} = {} ".format(nilai))