#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[]={1,2,3,4,5,6,7};
    int factoriel=1;
    int i;

    for(i=0;i<7;i++)
    {
        factoriel=factoriel*sayilar[i];
    }

    printf("Factorieli %d'dir.", factoriel);

    return 0;

}

