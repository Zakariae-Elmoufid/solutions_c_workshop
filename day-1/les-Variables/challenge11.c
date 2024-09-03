#include<stdio.h>



int main() {

float Surface , longueur , largeur ;

printf("saiser la longueur : ");
scanf("%f",&longueur);
printf("saisir la largeur : ");
scanf("%f",&largeur);


Surface = longueur * largeur ;

printf(" la surface d'un rectangle %.2f",Surface);

return 0;
}
