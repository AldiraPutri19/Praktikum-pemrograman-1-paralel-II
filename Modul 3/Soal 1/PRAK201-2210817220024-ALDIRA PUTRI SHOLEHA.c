#include <stdio.h>
int main()
{
    char Nama[20];
    char NIM [20];
    char KP[20];
    char TTL [20];
    char Alamat [20];
    char Hobby [20];
    char NO [20];

    printf("Nama                 :  "); gets(Nama);
    printf("NIM                  :  "); gets(NIM);
    printf("Kelas Paralel        :  "); gets(KP);
    printf("Tempat/Tanggal Lahir :  "); gets(TTL);
    printf("Alamat               :  "); gets(Alamat);
    printf("Hobby                :  "); gets(Hobby);
    printf("No. HP               :  "); gets(NO);
    return 0;
}
