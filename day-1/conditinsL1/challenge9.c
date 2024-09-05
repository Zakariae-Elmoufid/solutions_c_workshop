 #include<stdio.h>


 int main() {

 char C ;

 printf("veuille entrer une caracter : ");
 scanf("%c",&C);

 if (C>=65&&C<=90 || C>=97&&C<=122){
        printf("%c est alphabets \n",C);
    if(C>=65&&C<=90){
        printf("%c est majuscule.",C);
    }else {
        printf("%c est menuscule.",C);
    }
 }else {
    printf("%c n'est pas alphabets .",C) ;
 }



 return 0;
 }
