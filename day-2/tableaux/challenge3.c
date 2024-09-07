#include <stdio.h>



int main(){

int N , T[10] , i , sum ;
sum = 0 ;
printf("saisir le nombre d'elements d'un tableau : ");
scanf("%d",&N);

printf("saisir ces elments. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}
for(i=0;i<N;i++){
     sum = sum + T[i];
}
printf("%d \n",sum);


    return 0;
}



