#include<stdio.h>

void eligibilite(int Revenu, int Score, int Duree){
    if(Revenu >= 30000 && Score >= 700 &&Duree <= 10){
        printf("Eligible");
    }else if (Revenu >= 30000 && Score >= 650 && Duree <= 15){
        printf("Eligible avec conditions");
    }else{
        printf("Non elegible");
    }
}

int main() {

int Revenu ;
int Score ;
int Duree ;

printf("veuillez entrer le revenu annuel : ");
scanf("%d",&Revenu);
printf("Saisir le score de credit :");
scanf("%d",&Score);
printf("entrez la duree du pret : ");
scanf("%d",&Duree);

eligibilite(Revenu,Score,Duree);


   return 0; 
}