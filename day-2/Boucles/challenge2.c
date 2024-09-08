#include<stdio.h>


int main() {

int L, i ,j ;

printf("Entrez le nomber de lignes");
scanf("%d",&L);

for(i=1;i<=L;i++){
     for(j=1;j<=L-i;j++) {
        printf(" ");
     }
    for(j=1;j<=(2*i-1);j++){
            printf("*");
    }
    printf("\n");
}

return 0;
}
