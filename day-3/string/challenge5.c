#include <stdio.h>

int main(){
    
    char caractres[20] = {"abcd"};
    int i , count ;

    for(i=0;caractres[i]!='\0';i++){
        count++;
    }

   for(i=count;i>=0;i--){
    printf("%c",caractres[i]);
   }

    return 0;
}