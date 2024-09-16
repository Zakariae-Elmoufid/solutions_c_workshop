#include<stdio.h>
#include<string.h>


int main() {
    
    char chain[20];
    char caractere ;
    int  count = 0;

    printf("veuillez entrer un mots : ");
    scanf("%s",chain);
    printf("veuillez entrer un lettre :  ");
    scanf(" %c",&caractere);

    for(int i=0;i<strlen(chain);i++){
         if(caractere==chain[i]){
            count++;
         }
    }

    printf("Le nombre de fois ou ce caractere apparait est %d .",count);



    return 0;
}