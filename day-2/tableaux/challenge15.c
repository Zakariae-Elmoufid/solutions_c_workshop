#include<stdio.h>



int main(){

int T1[10] , T2[10] ,T[20];
int N1 , N2 ,i ;

// Demande � l'utilisateur de saisir le nombre d'�l�ments du tableau 1
printf("saisir la taille de tableau 1 : ");
scanf("%d",&N1);

// Demande � l'utilisateur de saisir le nombre d'�l�ments du tableau 2
printf("saisir la taille de tableau 2 : ");
scanf("%d",&N2);


// Saisie des �l�ments du tableau 1
printf("Entrez les element de tableau 1 \n");
for(i=0;i<N1;i++){
    printf("%d : ",i+1);
    scanf("%d",&T1[i]);
}

// Saisie des �l�ments du tableau 2
printf("Entrez les element de tableau 2\n");
for(i=0;i<N2;i++){
    printf("%d : ",i+1);
    scanf("%d",&T2[i]);
}


// Copier les �l�ments du premier tableau dans le tableau fusionne
for(i=0;i<N1;i++)
    T[i] = T1[i];
// Copier les �l�ments du deuxieme tableau dans le tableau fusionn�
for(int j=0;j<N2;j++)
    T[i+j] = T2[j];


// Afficher le tableau fusionn�.
printf(" le tableau fusionn� est ");
for(i=0;i<N1+N2;i++){
    printf("%d ",T[i]);
}

return 0;
}
