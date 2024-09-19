#include <stdio.h>



int main(){
    int  N ,i ,j , index ;
    int  T[10] = {10,4,10,16,9,24};
      N =  sizeof(T) / sizeof(T[0]);
    
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
        printf("%d",T[i]);
    }

    return 0;
}