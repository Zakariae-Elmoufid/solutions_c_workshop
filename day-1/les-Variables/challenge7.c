#include<stdio.h>



int main(){

int N1, N2, N3 ;
float M ;

printf("veuillez entrer la valuer de nomber 1 : ");
scanf("%d",&N1);
printf("veuillez entrer la valuer de nomber 2 : ");
scanf("%d",&N2);
printf("veuillez entrer la valuer de nomber 3 : ");
scanf("%d",&N3);

M = ((N1*2)+(N2*3)+(N3*5))/(2+3+5);

printf("la moyenne ponderee est %f",M);


return 0;
}
