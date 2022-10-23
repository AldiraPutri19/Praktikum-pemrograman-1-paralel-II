#include <stdio.h>
int main(void)
{
    float jari, tinggi, volume, luas, keliling;
    scanf("%f", &jari);
    scanf("%f", &tinggi);
    volume = (22*(jari*jari)*tinggi)/7;
    printf("Volume = %.2f\n", volume);
    luas = (2*22*jari*(jari+tinggi))/7;
    printf("Luas = %.2f\n", luas);
    keliling = ((2*22*jari)/7);
    printf("Keliling = %.2f\n", keliling);
    return 0;
}

