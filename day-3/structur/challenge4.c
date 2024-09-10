#include <stdio.h>

// Déclaration d'une structure 'pointer' pour représenter X , Y
struct pointer{
   int X;
   int Y;
};

int main()
{
   struct pointer s1;

   s1.X;
   s1.Y;

   printf("saisir la valeur de X : ");
   scanf("%d",&s1.X);
   printf("saisir la valeur de Y : ");
   scanf("%d",&s1.Y);

   int* px = &s1.X;
   int* py = &s1.Y;

   printf("la valeur de point X est %d \n",*px);
   printf("la valeur de point y est %d",*py);

    return 0;
}