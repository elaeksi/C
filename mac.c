#include <stdlib.h>
#include <stdio.h>

int main()
{
    int galibiyet=0, beraberlik=0, yenilgi=0;
    int devamKontrol=1;
    int atilanGolsayisi, yenilenGolsayiyi, takimPuan;

    while(devamKontrol == 1){
        printf("Atilan gol sayisini giriniz: ");
        scanf("%d", &atilanGolsayisi);

        printf("Yenilen gol sayisini giriniz: ");
        scanf("%d", &yenilenGolsayiyi);

        if(atilanGolsayisi>yenilenGolsayiyi){
            galibiyet++;
        }
        else if (atilanGolsayisi<yenilenGolsayiyi){
            yenilgi++;
        }
        else{
            beraberlik++;
        }
        printf("Devam etmek istiyor musunuz? evet ise 1'e hayir ise 0'a basiniz.");
        scanf("%d", &devamKontrol);

        
    }
    galibiyet=galibiyet*3;
    takimPuan=galibiyet+beraberlik;

    printf("Takimin puani: %d", takimPuan);

}
