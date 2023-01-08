#include <stdlib.h>
#include <stdio.h>
//huzur evine giren en küçük kişinin yaşını ve kaç tane küçük yaşta insan olduğunu veren program
 int main(){

    int kontrol=1, yas=0, enKucuk=9999, enKucukSayisi=0;

//** enKucuk değerine çok yüksek değer vermezsek if de belirsiz bir sayı yanlış çalışmasını sağlayabilir.
//**** while de int de kontrol değerini belirtmemiz gerekir ****

    while(kontrol == 1)  
    {
        printf("Huzur evine giren kisinin yasi kaçtir:\n ");
        scanf("%d", &yas);

        if(yas<enKucuk){
            enKucukSayisi = 0;
            enKucuk = yas;
            enKucukSayisi++;
        }
        else if(enKucuk == yas){
            enKucukSayisi++;
        }

        printf("Devam etmek için 1'e durmak icin 0'a basin.");
        scanf("%d", &kontrol);
    }
    printf("En kucugun yasi %d'dir.\n ",enKucuk);
    printf("En kucuk %d kisi vardir.",enKucukSayisi);

 }