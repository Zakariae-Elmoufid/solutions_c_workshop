#include<stdio.h>



int main() {

int Km ;
float Yards;
const float N = 1093.61;


printf("entrer la distance en kilomètres : ");
scanf("%d",&Km);

Yards = Km * N ;

printf("La distance en yards est %2f",Yards);


return 0;
}
