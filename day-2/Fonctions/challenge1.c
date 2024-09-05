#include<stdio.h>

int somme(int a , int b){
  int s ;
  s = a + b ;
  return s ;
}


int main() {

int N1 , N2 ;

printf("veuillez saisir le nomber entier : ");
scanf("%d",&N1);
printf("veuillez saisir le nomber entier : ");
scanf("%d",&N2);

printf("la somme deux nombers est %d",somme(N1,N2));

return 0;
}
