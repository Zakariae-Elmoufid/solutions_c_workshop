#include<stdio.h>



int main(){

int N , T[10] ;
int  i ,somme , moynne ;
somme = 0 ;

 // Demande � l'utilisateur de saisir le nombre d'�l�ments du tableau
printf("saisir le nombre d'elements d'un tableau : ");
scanf("%d",&N);

// Saisie des �l�ments du tableau
printf("saisir ces elements. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}
// calculer la somme des �l�ments d'un tableaur
for(i=0;i<N;i++){
    somme += T[i];
}
// calcule la moyenne des �l�ments d'un tableau
moynne = somme / N ;

 printf("la moyenne des elements est %d",moynne);

return 0;
}
