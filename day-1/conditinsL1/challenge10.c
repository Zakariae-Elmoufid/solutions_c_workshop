#include<stdio.h>



int main(){

int J , M , A ;
char* nom[] = {"janvier" , "fevrier" ,"mars" , "avril" ,"mai", "juin" , "juillet" , "aout" ,"september" , "october" , "november" , "december"} ;

printf("veuillez saisir la date que vous prefere .\n");

printf("jour : ");
scanf("%d",&J);
printf("mois  :");
scanf("%d",&M);
printf("annee : ");
scanf("%d",&A);

printf("%d/%d/%d \n",J,M,A);

if(M>=1 && M<=12){
printf("%d-%s-%d",J,nom[M-1],A);
}else {
    printf("il ne y a pas mois");

}

}
