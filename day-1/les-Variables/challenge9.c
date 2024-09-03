#include<stdio.h>
#include<math.h>



int main() {

int x , y , z , Distance;

printf("veuillez entrer la valuer de x : ");
scanf("%d",&x);
printf("veuillez entrer la valuer de y : ");
scanf("%d",&y);
printf("veuillez entrer la valuer de z : ");
scanf("%d",&z);


Distance = sqrt(pow(x*2-x*1,2) + pow(y*2-y*1,2) + pow(z*2-z*1,2));

printf(" la distance entre deux points dans un espace 3D est %d",Distance);

}
