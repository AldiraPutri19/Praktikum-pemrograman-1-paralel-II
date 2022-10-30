#include <stdio.h>

int main(){
    int angka;

    scanf("%d", &angka);
    if(angka <= 0.0){
        if(angka == 0.0){
                printf("nol\n");
        } else {
          printf("negatif\n");
        }
        } else {
          printf("positif\n");
        }

    main();
    return 0;
}

