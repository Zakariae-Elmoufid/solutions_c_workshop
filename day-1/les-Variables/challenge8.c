#include<stdio.h>
#include<math.h>





int main() {

int   a , b , c ;
float Mg;

printf("veuillez entrer la valuer de a : ");
scanf("%d",&a);
printf("veuillez entrer la valuer de b: ");
scanf("%d",&b);
printf("veuillez entrer la valuer de c: ");
scanf("%d",&c);

Mg= pow(a * b * c,0.33);

  printf("la moyenne geametrique est %f",Mg);

return 0;
}
