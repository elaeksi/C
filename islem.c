#include <stdio.h>
#include <math.h>

int topla(int sayi1, int sayi2){
    return sayi1 + sayi2;
}
int topla2(int sayi1, int sayi2, int sayi3){
    return sayi1 + sayi2 + sayi3;
}

int ustAl(int sayi1, int sayi2){
    return pow(sayi1,sayi2);
}
int faktor(int sayi1){
    int faktor=1;
    int i;
    for(i=1; i<=sayi1; i++){
        faktor = faktor * i;
    }
    return faktor;
}

int main(){

    int islem,sayi1,sayi2,sayi3,sonuc;
    printf("Bir islem seciniz: ");
    scanf("%d",&islem);
    if(islem==5){
        return 0;
    }
    
    else{
        switch (islem)
        {
        case 1: 
            printf("Lutfen sayi1'i giriniz: ");
            scanf("%d",&sayi1);
            printf("Lutfen sayi2'i giriniz: ");
            scanf("%d",&sayi2);
            sonuc= topla(sayi1,sayi2);
            printf("sonuc :%d", sonuc);
            break;
        case 2:
            printf("Lutfen sayi1'i giriniz: ");
            scanf("%d",&sayi1);
            printf("Lutfen sayi2'i giriniz: ");
            scanf("%d",&sayi2);
            printf("Lutfen sayi3'i giriniz: ");
            scanf("%d",&sayi3);
            sonuc=topla2(sayi1,sayi2,sayi3);
            printf("sonuc :%d", sonuc);
            break;
        case 3:
            printf("Lutfen sayi1'i giriniz: ");
            scanf("%d",&sayi1);
            printf("Lutfen sayi2'i giriniz: ");
            scanf("%d",&sayi2);
            sonuc=ustAl(sayi1,sayi2);
            printf("sonuc :%d", sonuc);
            break;
        case 4:
            printf("Lutfen sayi1'i giriniz: ");
            scanf("%d",&sayi1);
            sonuc=faktor(sayi1);
            printf("sonuc :%d", sonuc);
            break;
        
        default:
            printf("Yanlis deger giriniz");
            break;
        }

    }
}

