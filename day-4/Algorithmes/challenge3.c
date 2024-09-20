#include <stdio.h>




int main() {
    
    int N = 5;
    int T[5] = {12,4,17,2,9};
    int i , j , swap , index ;

    for(i=0;i<N;i++){
         index = i ;
        for(j=i+1;j<N;j++){
            if(T[index]>T[j]){
               swap = T[j];
               T[j] = T[index];
               T[index] = swap ;
            }
        }
    }

    for(i=0;i<N;i++){
        printf("%d ",T[i]);
    }


    return 0;
}