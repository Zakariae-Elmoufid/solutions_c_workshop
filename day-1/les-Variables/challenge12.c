#include<stdio.h>




int main () {

int a , b, c, d ,ch1 , ch2;

printf("veuillez entrer la valuer a: ");
scanf("%d",&a);
printf("veuillez entrer la valuer b: ");
scanf("%d",&b);
printf("veuillez entrer la valuer c: ");
scanf("%d",&c);
printf("veuillez entrer la valuer d: ");
scanf("%d",&d);

ch1 = a ;
a = d ;
ch2 = b ;
b = c ;
c = ch2 ;
d = ch1 ;

printf("%d %d %d %d",a,b,c,d);



return 0 ;
}
