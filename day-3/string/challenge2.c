#include <stdio.h>


int main() {
    
   char caracter[50];
   int   i , count = 0 ;

   printf("Entrez une chaine de caracteres ." );
   scanf("%s",caracter);

   for(i=0;caracter[i]!='\0';i++) {
        count++;
   }
   
   printf("Longueur de la chaine est %d .",count);

    return 0;
}