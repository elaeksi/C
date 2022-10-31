#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1, sayi2, toplam, fark, carpim, bolu;
    char islem;

    printf("1. sayiyi giriniz: ");
    scanf("%d",&sayi1);

    printf("2. sayiyi giriniz: ");
    scanf("%d",&sayi2);

    toplam=sayi1 + sayi2; 
    fark=sayi1-sayi2;
    carpim=sayi1*sayi2;
    bolu=sayi1/sayi2;

    printf("Bir islem girin: ");
    scanf("%s",&islem);

    switch(islem)
    {
        case '+': printf("Toplam %d'dir.", toplam);
        break;
        case '-': printf("Fark %d'dir.",fark);
        break;
        case '*': printf("Carpim %d'dir.",carpim);
        break;
        case '/': printf("bolum %d'dir.",bolu);
        break;
    }
   
 
return 0;


}