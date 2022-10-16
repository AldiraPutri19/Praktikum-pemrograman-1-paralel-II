#include <stdio.h>
#include <math.h>
int main()
{
    int A= 12;
    int C= 5;
    printf("Diketahui: \n");
    printf("Alas= %d cm\n", C);
    printf("Tinggi= %d cm\n\n", A);

    int B= sqrt(A*A + C*C);
    printf("Jawab:\n");
    printf("Sisi A= %d cm\n", A);
    printf("Sisi B= %d cm\n", B);
    printf("Sisi C= %d cm\n", C);

    int keliling =  A+B+C;
    printf("keliling = %d cm\n", keliling);
    int luas= A*C/2;
    printf("Luas = %d cm\n", luas);
    return 0;

}
