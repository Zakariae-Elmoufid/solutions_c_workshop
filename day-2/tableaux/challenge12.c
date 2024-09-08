#include<stdio.h>



int main(){

int N , T[10] ;
int  i ;

 // Demande à l'utilisateur de saisir le nombre d'éléments du tableau
printf("saisir le nombre d'elements d'un tableau : ");
scanf("%d",&N);

// Saisie des éléments du tableau
printf("saisir ces elements. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}

printf("les element du tableau pair sont :");
for(i=0;i<N;i++){
    if (T[i]%2==0)
        printf("%d ",T[i]);
}
return 0;
}
