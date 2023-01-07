#include <stdio.h>
#include <stdlib.h>
//kod geç çalışıyor sebebini bulamadım 
int main(){
    
    int ucret, saat;

    printf("Otopark da kalma surenizi giriniz: "); 
    scanf("%d", &saat);

    if(saat<=1){
        ucret=3;
    }
    else if(saat<=4){
        ucret=9;
    }
    else if(saat<=6){
        ucret=17;
    }
    else if(saat<=10){
        ucret=27;
    }
    else{
        ucret=27+(saat-10);
    }
    printf("Otopark ucretiniz %d tl dir.", ucret);

    return 0;
}