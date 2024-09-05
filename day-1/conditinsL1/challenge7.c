#include<stdio.h>



int main() {

char C ;

printf("veuillez enter un caracter : ");
scanf("%c",&C);


if(C>=65&&C<=90){
    printf("%c  alphabet majuscule",C);
}else {
   printf("%c  alphabet minuscule",C);
}



return 0;
}
