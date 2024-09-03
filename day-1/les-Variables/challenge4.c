 #include<stdio.h>



 int main() {

 int kmh ;
 float ms;
const float N = 0.27778;


printf("veuillez entrer la vitesse en kilomètres par heure : ");
scanf("%d",&kmh);

ms = kmh * N ;

printf("La vitesse en mètres par seconde %f",ms);

 return 0;
 }
