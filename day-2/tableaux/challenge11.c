#include<stdio.h>



int main(){

int N , T[10] ;
int remplace , nouvelle, i ;

 // Demande � l'utilisateur de saisir le nombre d'�l�ments du tableau
printf("saisir le nombre d'elements d'un tableau : ");
scanf("%d",&N);

// Saisie des �l�ments du tableau
printf("saisir ces elements. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}
//saisie la valeur � remplacer de tablaeu
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
