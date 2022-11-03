#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[100];
    int i, toplam=0;
    float ortalama, sayi;

    printf("sayi degerini giriniz: ");
    scanf("%f",&sayi);
    for (i=0;i<sayi;i++) 
    {
        printf("dizinin %d.sayina gir:", i+1);
        scanf("%d",&dizi[i]);
    }  
    printf("\n\n");
    for (i=0;i<sayi;i++) 
    {
        printf ("%d\n", dizi[i]);
    }
    for (i=0;i<sayi;i++) 
    {
        toplam=toplam+dizi[i];
    }
    printf(" toplam: %d\n", toplam);

    for (i=0;i<sayi;i++) 
    {
        ortalama=toplam/sayi;
    }
    printf("ortalama: %f", ortalama);


}

