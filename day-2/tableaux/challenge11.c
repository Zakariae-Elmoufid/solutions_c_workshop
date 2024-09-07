#include<stdio.h>



int main(){

int N , T[10] ;
int remplace , nouvelle, i ;

 // Demande à l'utilisateur de saisir le nombre d'éléments du tableau
printf("saisir le nombre d'elements d'un tableau : ");
scanf("%d",&N);

// Saisie des éléments du tableau
printf("saisir ces elements. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}
//saisie la valeur à remplacer de tablaeu
printf("Entrez la valeur que vous remplacez");
scanf("%d",&remplace);
// Saisie la nouvelle du valeur
printf("Entrez la nouvelle valeur : ");
scanf("%d", &nouvelle);

for(i=0;i<N;i++){
    if(T[i]==remplace){
        T[i] = nouvelle ;

    }
}

for(i=0;i<N;i++){
    printf("%d ",T[i]);
}


return 0;

}
