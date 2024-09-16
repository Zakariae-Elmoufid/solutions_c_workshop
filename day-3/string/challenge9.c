#include <stdio.h>
#include <string.h>


int main(){

     char string[30];
     int i , j ;
     int  N = strlen(string);

     printf("Entrez un string : ");
     gets(string);
     
    for(i=0;i<N;i++){
        if(string[i] == ' '){
            for(j=i;j<strlen(string)-1;j++){
                string[j]=string[j+1];
            }
          N--;
        }
    }  
    
    puts(string);

    return 0;
}