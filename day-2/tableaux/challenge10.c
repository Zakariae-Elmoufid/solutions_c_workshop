#include <stdio.h>



int main(){

int N , T[10] ;
int recherche , i ;
printf("saisir le nombre d'elements d'un tableau : ");
scanf("%d",&N);

printf("saisir ces elements. \n");
for(i=0;i<N;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}

printf("entrez le nomber que vous recherchez : ");
scanf("%d",&recherche);
for(i=0;i<N;i++){
    if(T[i]==recherche)
        recherche = T[i];
}
printf("%d",recherche);
return 0;
}
