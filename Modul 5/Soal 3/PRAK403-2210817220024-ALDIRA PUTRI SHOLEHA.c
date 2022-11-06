#include <stdio.h>
int main()
{
    int angka1, angka2, a, b;
    for (int i=0; i<=3; i++){
    scanf("%d %d", &angka1, &angka2);
    if(angka1<angka2){
    for(a=angka1, b=angka2; a<=angka2, b>=angka1; a++, b--){
        printf("%d %d", a, b);
        if(a == angka2){
            break;}
        else{
            printf(" - ");}
        }
    }
    else{
    for(a=angka1, b=angka2; a>=angka2, b<=angka1; a--, b++){
        printf("%d %d", a, b);
        if(b == angka1){
            break;}
        else{
            printf(" - ");}
    }
    }
}
}
