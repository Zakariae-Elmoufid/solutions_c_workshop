#include <stdio.h>
#include <string.h>


int main() {

    char string[30];
    char convertS[30];

    printf("Entrez un chain : ");
    scanf("%s",string);
     
    for(int i=0;i<strlen(string);i++){
        string[i]=string[i]-32;
    } 
    
    printf("--%s ",string);

    return 0;
}