#include <stdio.h>
int main()
{
int s1=4, s2=5, s3=7;
int Keliling, Biaya, Harga;

printf("Diketahui :\n");
printf("Panjang sisi segitiga berturut-turut adalah %d,", s1);
printf("%d,", s2);
printf("dan %d\n", s3);
Keliling= s1+s2+s3;
printf("Keliling Tanah Pak Dengklek adalah %d\n", Keliling);
Harga= 85000;
printf("Harga tanah Per Meter adalah%\n", Harga);
Biaya= Harga*Keliling;
printf("Jawaban :\n");
printf("Biaya yang diperlukan Pak Dengklek adalah Rp. %d\n", Biaya);
return 0;

}










