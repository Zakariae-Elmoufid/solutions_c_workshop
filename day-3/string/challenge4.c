#include <stdio.h>
#include <string.h>



int main() {

    char a[20];
    char b[20];
    
    printf("Entrez le premier chaines : ");
    scanf("%s",a);
    printf("Entrez la deuxiame chaines : ");
    scanf("%s",b);

    if(strcmp(a,b)==0){
        printf("la premier et  deuxieme chaines sont egales. ");
    }else{
        printf("les chaines sont differentes.");
    }

    return 0;
}