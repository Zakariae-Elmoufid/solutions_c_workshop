#include<stdio.h>
#include <string.h>

char* invers(char string[20]){
       int i  ,N;
       char swap;
       N = strlen(string);
       for(i=0;i<N/2;i++){
          swap = string[i];
          string[i]  = string[N-i-1];
          string[N-i-1] = swap ;
       }
       return  string ;
       }
     


int main(){

    char chain[20];
    printf("entrez un chaine : ");
    scanf("%s",chain);

    printf("Chaine inverse : %s",invers(chain));

return 0;
}
