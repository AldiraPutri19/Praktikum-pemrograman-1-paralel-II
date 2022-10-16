#include <stdio.h>
int main ()
{
    float phi, putaran, JT, r, keliling;
    phi = 3.14;
    putaran = 5;
    JT = 14;
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n", JT);

    keliling = JT/putaran;
    r = keliling/(2*phi);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingI Pak Dengklek %.2f", r);
    return 0;
}
