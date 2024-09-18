#include <stdio.h>


int main(){
     
     int T[10] = {10,4,10,16,9,24};
    int i,j;
    int swap ;

    for(  i=0;i<=5-1;i++){
        for(j=0;j<=5-i-1;j++){
            if(T[j]>T[j+1]){
                swap = T[j];
                T[j] = T[j+1];
                T[j+1] = swap ;
            }
        }
    }

    for(i=0;i<=5;i++){
        printf("%d,",T[i]);
    }

    return 0;
}