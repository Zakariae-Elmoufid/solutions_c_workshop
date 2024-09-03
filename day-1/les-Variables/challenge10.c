#include<stdio.h>



int main () {

float R ,V ;
const float p = 3.14;

printf("veuillez saisir le rayon %d :",R);
scanf("%f",&R);

V = (4/3) * p * pow(R,3);

printf(" le volume d'une sphere est %.2f",V);

return 0;
}
