#include <stdlib.h>
#include <stdio.h>
//yıldızlarla şekil çizme basit

int main()
{
    int i, j, en, boy;
    printf("En degerini giriniz: ");//girdiler
    scanf("%d", &en);
    printf("Boy degerini giriniz: ");
    scanf("%d", &boy);

    for(i=0; i<en; i++){
        for(j=0; j<boy; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for(i=0; i<en; i++){
        for(j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for(i=0; i<en; i++){
        for(j=boy-i; j>0; j--)//boy-i yazıyoruz ki gittikçe yazılacak değer sayısı azalsın.
        {
            printf("*");
        }
        printf("\n");
    }
    
}
/*toplu yorum satırı yapma 
çıktı: 

*****
*****
*****
*****
*****

*
**
***
****
*****

*****
****
***
**
*
*/
