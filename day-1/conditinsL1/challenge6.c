#include<stdio.h>




int main() {

int N ;

printf("saisir la valeur de N");
scanf("%d",&N);


if(N<0)
    printf("  N est nigatif");
else if(N>0)
    printf("N est positife");
else
    printf("N est null");



return 0;
}
