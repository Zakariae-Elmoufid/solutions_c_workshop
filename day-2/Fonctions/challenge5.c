#include <stdio.h>


   int Factorielle(int N){
        int s ;
        s = 1 ;
        while(N>0){
            s = s * N;
            N-- ;
        }
            return s ;
    }

int main() {

    int N , F;

 printf("enter le nomber de factorielle :");
 scanf("%d",&N);

F = Factorielle(N);

printf("le factorielle est  %d",F);



    return 0;
}



