#include <stdio.h>



int main(){

int N , T[10] , i ;
printf("saisir le nombre d'éléments d'un tableau : ");
scanf("%d",&N);

printf("saisir ces éléments. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}
for(i=0;i<N;i++)
printf("%d \n",T[i]);


    return 0;
}
