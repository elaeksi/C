#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,s2,ort;
    printf("sınav1 giriniz: ");
    scanf("%d",&s1);

    printf("sınav2 giriniz: ");
    scanf("%d",&s2);

    ort=(s1+s2)/2;

    printf("Ortalama: %d ",ort);

    if(ort>=50){
        printf(" Gectiniz :)");
    }
    else{
        printf(" Kaldınız :(");
    }

    return 0;


}