#include<stdio.h>



int main(){

int N , T[10] ;
int  i ,somme , moynne ;
somme = 0 ;

 // Demande à l'utilisateur de saisir le nombre d'éléments du tableau
printf("saisir le nombre d'elements d'un tableau : ");
scanf("%d",&N);

// Saisie des éléments du tableau
printf("saisir ces elements. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}
// calculer la somme des éléments d'un tableaur
for(i=0;i<N;i++){
    somme += T[i];
}
// calcule la moyenne des éléments d'un tableau
moynne = somme / N ;

 printf("la moyenne des elements est %d",moynne);

return 0;
}
