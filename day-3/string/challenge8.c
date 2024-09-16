#include <stdio.h>
#include <string.h>


int main(){

     char string[30];
     int i ;

     printf("Entrez un string : ");
     gets(string);

    for(i=0;i<strlen(string);i++){
        string[i]=string[i]+32;
    }
    printf("%s",string);

    return 0;
}