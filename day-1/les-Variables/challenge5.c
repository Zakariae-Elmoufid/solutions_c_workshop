#include<stdio.h>




int main() {

int C ;

printf("veuillez saisir la temp�rature en Celsius : ");
scanf("%d",&C);
if(C<0){
  printf("l'etat de l'eau � cette temperature est  Solide");
}
else if(C>=0 && C<100){
   printf("l'etat de l'eau � cette temperature est Liquide");
}
else{
    printf("l'etat de l'eau � cette temperature est Gaz");
}




return 0;
}
