#include<stdio.h>



int main(){

int T[10] = {23,12,56,35,45};
int Tcopie[10];
int i ;

printf("les elements du tableau original.\n");
for(i=0;i<5;i++)
     printf("%d ",T[i]);

//copier les elements du tableau original dans le tableau copie
for(i=0;i<5;i++)
    Tcopie[i] = T[i];

printf("\n les elements du tableau copie.\n");
for(i=0;i<5;i++)
    printf("%d ",Tcopie[i]);

return 0;
}
