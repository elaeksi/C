#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, hipotenus;
    printf("Ucgenin bir kenarini giriniz: ");
    scanf("%d",&a);

    printf("ucgenin bir kenarini giriniz: ");
    scanf("%d",&b);

    hipotenus=sqrt(a*a+b*b);
    printf("Hipotenus %d'dir.", hipotenus);
}