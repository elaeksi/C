#include <stdio.h>
#include <stdlib.h>

int main(){

    int baksayi, saat, sonuc;
    printf("bakteri sayisini giriniz: ");
    scanf("%d",&baksayi);

    printf("kaç saat sonra: ");
    scanf("%d",&saat);
    sonuc=baksayi*pow(2, saat);

    printf("%d kadar bakteri vardir.",sonuc);


}