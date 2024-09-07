#include <stdio.h>



int main(){

int N , T[10] , i ,facteur ;

printf("saisir le nombre d'elements d'un tableau : ");
scanf("%d",&N);

printf("saisir ces elements. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}
printf("entrez le facteur de multiplication");
scanf("%d",&facteur);

for(i=0;i<N;i++){
        T[i] = T[i] * facteur;
        printf("%d ", T[i]);

}

return 0;
}

