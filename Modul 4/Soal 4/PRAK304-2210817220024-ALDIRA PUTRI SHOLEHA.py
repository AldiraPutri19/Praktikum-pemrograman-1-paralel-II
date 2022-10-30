bil=int(input())
if ((bil>=1) & (bil<10)) :
        print("Satuan")
elif (bil==0):
        print("Nol")
elif ((bil>10) & (bil<20)):
        print("Belasan")
elif ((bil>=20) & (bil<=99)):
        print("Puluhan")
else :
        print("Anda menginput melebihi limit bilangan")