 #include<stdio.h>


 int main() {

   int NM ; //le nombre de multiplication
   int i ;

    printf("veuillez saisir un nomber : ");
    scanf("%d",&NM);

    // afficher le tablaeu de multiplication en order decroissant
    for(i=10;i>0;i--){
        printf("%d * %d = %d \n",NM,i,NM*i);
    }

 return 0;
 }
