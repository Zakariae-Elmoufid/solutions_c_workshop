#include<stdio.h>



int main() {

int C ;
float K;
const float N = 273.15 ;


printf("veuillez entrer la temperature en Celsius : ");
scanf("%d",&C);

K = C + N ;

printf("la temperature en kelvin est %2f ",K);



return 0;
}
