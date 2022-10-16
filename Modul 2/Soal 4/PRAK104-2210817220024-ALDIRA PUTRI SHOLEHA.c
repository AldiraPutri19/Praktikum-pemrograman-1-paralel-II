#include <stdio.h>
int main ()
{
    float diskonA= 0.13;
    float diskonB= 0.21;
    int A= 400000;
    int B=350000;

    int discA= A*diskonA;
    int discB= B*diskonB;
    int totalA= A-discA;
    int totalB= B-discB;

    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", totalA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", totalB);
    return 0;
}
