#include <stdio.h>
int main()
{
    float n1;
    float n2;
    float hasil;

    printf("Masukkan nilai pertama : ");
    scanf("%f" , &n1);
    printf("Masukkan nilai kedua : ");
    scanf("%f" , &n2);
    hasil = n1+n2;
    printf("Hasil dari penjumlahan nilai pertama \"%.f\" dan niai kedua \"%.f\" adalah \"%.2f\"", n1, n2, hasil);
    return 0;

}
