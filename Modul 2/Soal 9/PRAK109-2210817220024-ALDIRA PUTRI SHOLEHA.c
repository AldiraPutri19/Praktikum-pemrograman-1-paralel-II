#include <stdio.h>
int main ()
{
    int pasukan, pahlawan, jumlah;
    pasukan = 958730 ;
    pahlawan= 5;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    jumlah = pasukan/pahlawan;
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", jumlah);
    return 0;
}
