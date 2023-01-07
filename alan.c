#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//kare, üçgen ve daireden biri seçilip girilen değerlere göre ortalamalarını veren kod
int main(){
    
    int secim, kenar, yukseklik, taban, yaricap, kare, ucgen, daire;

    printf("hangi geometrik seklin alanini bulmak istersiniz.\n ");
    printf("1.kare-2.ucgen-3.daire\n\n");
    scanf("%d", &secim);

    switch (secim)//seçim için girdi yaptıktan sonra scanf ile her seçim için case açtık
    {
    case 1: 
    printf("Karenin kenar degerini giriniz: ");
    scanf("%d", &kenar);
    kare=kenar*kenar;
    printf("%d kenarlı karenin alani %d dir.", kenar, kare);
        break;
    case 2:
    printf("Ucgenin taban degerini giriniz: ");
    scanf("%d", &taban);
    printf("Ucgenin yukseklik degerini giriniz: ");
    scanf("%d", &yukseklik);    
    ucgen=taban*yukseklik/2;
    printf("ucgenin alani %d dir.", ucgen);
        break;
    case 3:
    printf("Dairenin yaricapini giriniz: ");
    scanf("%d", &yaricap);
    daire=yaricap*yaricap*M_1_PI;
    printf("Dairenin alani %d dir.", daire);
        break;
    default:
    printf("gecersiz deger girdiniz: ");
        break;
    }

}