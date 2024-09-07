#include <stdio.h>



int main(){

int N , T[10] , i ,max;

printf("saisir le nombre d'elements d'un tableau : ");
scanf("%d",&N);

printf("saisir ces elments. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}

max = 0 ;

for(i=0;i<N;i++){
   if(T[i] > max ){
       max = T[i];
   }
}
printf("le maximun est %d \n",max);

    return 0;
}
