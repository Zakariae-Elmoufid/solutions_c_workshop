#include<stdio.h>

//Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré



int main() {

int a , b ,c , delta ;
int x , x1 , x2 ;

printf("saisir la valeur de a : ");
scanf("%d",&a);
printf("saisir la valeur de b : ");
scanf("%d",&b);
printf("saisir la valeur de c : ");
scanf("%d",&c);

printf("%dx^2+%dx+c = 0 \",a,b,c);
n
delta = pow(b,2) - 4*a*b;

if(a>0){
    x1 = (-b+sqrt(delta)) / (2*a) ;
    x2 = (-b-sqrt(delta)) / (2*a) ;
    printf("  l'equation  deuxieme degre  consiste deux solutions   x1=%d et x2=%d  ",x1,x2);
}else if(a=0){
 x = (-b) / 2*a;
 printf(" l'equation  deuxieme degre  consiste un solution  x=%d  ",x);
}else
printf("pas de solution reelle");



return 0;
}
