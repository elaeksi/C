#include <stdio.h>
#include <stdlib.h>
int main()
{
    int saat, sonuc;
    printf("kac saat kaldınız: ");
    scanf("%d",&saat);

    if(saat<=4 && saat>0)
    {
        sonuc=saat*10;
    }
    if(saat<=8 && saat>=5)
    {
        sonuc=saat*8;
    }
    if(saat<=12 && saat>=9)
    {
        sonuc=saat*6;
    }
    if(saat>=13)
    {
        sonuc=saat*5;
    }
    printf("ucretiniz %d TL", sonuc);
}
    