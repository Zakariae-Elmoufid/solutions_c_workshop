#include <stdio.h>



int main(){
    int  N ,i ,j , index ;
    int  T[5] = {10,4,24,16,9};
      N =  5 ;
      
       for(i=0;i<N;i++){
         printf(" %d ",T[i]);
     }

     printf("\n");

    for(i=1;i<N;i++){
        index = i ;
        int valuerActuelle = T[i];
       for( j=i-1 ; j>=0 && T[j]>valuerActuelle ; j--){
           T[j+1] = T[j];
            index = j ;
        }
        T[index] = valuerActuelle;
       }
    
    
   for(i=0;i<N;i++){
         printf(" %d ",T[i]);
     }  

    return 0;
}