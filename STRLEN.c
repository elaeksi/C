#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    char k[25];
    int i;
    printf("Buyuk harflerle kelime");
    gets(k);
    for(i=0; i<strlen(k); i++){
        if((k[i]=='A') || (k[i]=='E') || (k[i]=='I') || (k[i]=='O') || (k[i]=='U'))
        printf("%d",k[i]);
        else printf("%c",k[i]);
    }
}