#include<stdio.h>



int main(){

int T1[10] , T2[10] ,T[20];
int N1 , N2 ,i ;

// Demande à l'utilisateur de saisir le nombre d'éléments du tableau 1
printf("saisir la taille de tableau 1 : ");
scanf("%d",&N1);

// Demande à l'utilisateur de saisir le nombre d'éléments du tableau 2
printf("saisir la taille de tableau 2 : ");
scanf("%d",&N2);


// Saisie des éléments du tableau 1
printf("Entrez les element de tableau 1 \n");
for(i=0;i<N1;i++){
    printf("%d : ",i+1);
    scanf("%d",&T1[i]);
}

// Saisie des éléments du tableau 2
printf("Entrez les element de tableau 2\n");
for(i=0;i<N2;i++){
    printf("%d : ",i+1);
    scanf("%d",&T2[i]);
}


// Copier les éléments du premier tableau dans le tableau fusionne
for(i=0;i<N1;i++)
    T[i] = T1[i];
// Copier les éléments du deuxieme tableau dans le tableau fusionné
for(int j=0;j<N2;j++)
    T[i+j] = T2[j];


// Afficher le tableau fusionné.
printf(" le tableau fusionné est ");
for(i=0;i<N1+N2;i++){
    printf("%d ",T[i]);
}

return 0;
}
