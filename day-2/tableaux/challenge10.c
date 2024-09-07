#include <stdio.h>



int main(){

int N , T[10] ;
int recherche , i ;

 // Demande à l'utilisateur de saisir le nombre d'éléments du tableau
printf("saisir le nombre d'elements d'un tableau : ");
scanf("%d",&N);

// Saisie des éléments du tableau
printf("saisir ces elements. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}
// Demande à l'utilisateur de saisir le nombre à rechercher dans le tableau
printf("entrez le nomber que vous recherchez : ");
scanf("%d",&recherche);

// Parcours du tableau pour trouver le nombre recherché
for(i=0;i<N;i++){
    if(T[i]==recherche)
        recherche = T[i];
}

printf("%d",recherche);

return 0;
}
