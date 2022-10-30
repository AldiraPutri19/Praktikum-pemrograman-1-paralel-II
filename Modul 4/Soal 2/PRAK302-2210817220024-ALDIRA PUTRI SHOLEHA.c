#include <stdio.h>

int main(){
    int nilai;

    scanf("%d", &nilai);

    if(nilai >= 80 && nilai <= 100)
        printf("A\n");
    else if(nilai > 68 && nilai <= 79)
        printf("B\n");
    else if(nilai > 50 && nilai <= 68)
        printf("C\n");
    else if(nilai > 49 && nilai <= 50)
        printf("D\n");
    else if(nilai > 0 && nilai <= 50)
        printf("E\n");

    main();
    return 0;
}

