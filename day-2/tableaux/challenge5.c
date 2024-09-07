#include <stdio.h>



int main(){

int N , T[10] , i ,min;

printf("saisir le nombre d'elements d'un tableau : ");
scanf("%d",&N);

printf("saisir ces elements. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}

min = T[0] ;

for(i=0;i<N;i++){
   if(T[i] < min ){
       min = T[i];
   }
}
printf("le minimun est %d \n",min);

    return 0;
}
