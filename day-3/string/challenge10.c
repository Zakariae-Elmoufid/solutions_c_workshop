#include <stdio.h>
#include <string.h>


int main(){
    
    char ChainPrincipale[100];
    char SousChain[30];

    printf("Entrez une phrase : ");
    gets(ChainPrincipale);
    printf("Entrez une mote : ");
    gets(SousChain);

    char *StringPtr = strstr(ChainPrincipale,SousChain);

    if(StringPtr != NULL){
        printf("la sous-chaine est trouvee .");
    }else{
        printf("la sous-chaine n'est pas trouve .");
    }

    return 0;
}