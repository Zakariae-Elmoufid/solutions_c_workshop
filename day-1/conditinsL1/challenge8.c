#include<stdio.h>




int main() {

float M ;


printf("saisir la moyenne : ") ;
scanf("%f",&M);

if(M<10){
    printf("il est recale .");
}else if(M>=10&&M<=12){
  printf("passble");
}else if (M>=12&&M<=14){
   printf("assez bien");
}else if (M>=14&&M<=16){
  printf("bien");
}else {
   printf("tres bien");
}




return 0;
}
