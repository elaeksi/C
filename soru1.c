#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ogrsayi, i, vize, proje1, proje2, donemodevi, final;
    float yilici, yilsonu, ort;
    printf("Notlari hesaplanacak ogrenci sayisini giriniz: ");
    scanf("%d",&ogrsayi);

    int dizi[ogrsayi];

    for(i=0;i<ogrsayi;i++)
    {
        scanf("%d",&vize);

        printf("Proje 1 notunu giriniz: ");
        scanf("%d",&proje1);

        printf("Proje 2 notunu giriniz: ");
        scanf("%d",&proje2);

        printf("Donem odevi notunu giriniz: ");
        scanf("%d",&donemodevi);

        printf("Final notunu giriniz: ");
        scanf("%d",&final);

        yilici=(float)vize*45/100+(float)proje1*20/100+(float)proje2*20/100+(float)donemodevi*15/100;
        yilsonu=final;
        ort=yilici*45/100+yilsonu*55/100;
        printf("Yil sonu notu %.4f'dir.\n", ort);

        if(ort>=90)
        {
            printf("AA");
        }
        else if(ort>=85)
        {
            printf("BA");
        }
        else if(ort>=80)
        {
            printf("BB");
        }
        else if(ort>=75)
        {
            printf("CB");
        }
        else if(ort>=65)
        {
            printf("CC");
        }
        else if(ort>=58)
        {
            printf("DC");
        }
        else if(ort>=50)
        {
            printf("DD");
        }
        else if(ort>=40)
        {
            printf("FD");
        }
        else
        {
            printf("FF");
        }
        printf("\n");
    }


}