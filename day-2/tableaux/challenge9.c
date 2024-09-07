#include<stdio.h>



int main(){

int T[10] = {1,2,3,4,5};

int i ;

for(i=0;i<=4;i++){
    printf("%d ",T[i]);
}
printf("\n");
// methode 1
/*for(i=4;i>=0;i--){
    printf("%d ",T[i]);
}*/

//methode2
// je utilise d'autre  tableau
int Ts[10];
for(i=0;i<=4;i++)
    Ts[4-i] = T[i];

for(i=0;i<=4;i++)
     printf("%d ",Ts[i]);

return 0;
}
