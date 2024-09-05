#include<stdio.h>

int produit(int a , int b){
  int p;
  p = a * b ;
  return p ;
}


int main() {

int N1 , N2 ;

printf("veuillez saisir le nomber entier : ");
scanf("%d",&N1);
printf("veuillez saisir le nomber entier : ");
scanf("%d",&N2);

printf("le produit deux nombers est %d",produit(N1,N2));

return 0;
}
