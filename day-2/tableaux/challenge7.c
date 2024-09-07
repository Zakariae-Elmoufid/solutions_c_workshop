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
int j ;
for(i=0;i<N;i++){
    for( j=i+1;j<N;j++){
        if(T[i]>T[j]){
            int change = T[i];
            T[i] = T[j];
            T[j] = change;
        }
    }
}
printf("les element du tableau par ordre croissant sont \n");

for(i=0;i<N;i++)
    printf("%d\n",T[i]);
return 0;
}
