#include<stdio.h>
#include<string.h>
#include "header.h"



char titres[liver][50];
char auteurs[liver][50];
float prix[liver];
int quantites[liver];
int counter = 0 ;
int repeter = 0 ;

// Fonction pour ajouter des livres dans le stock
void Ajouter(){


  again :

    printf("saisiz le titre du livre : ");
    scanf(" %s",titres[counter]);
    printf("saisir l'auteur du livre: ");
    scanf(" %s",auteurs[counter]);
    printf("saisir le prix du livre: ");
    scanf("%f", &prix[counter]);
    printf("saisir la quantite en stock: ");
    scanf("%d", &quantites[counter]);
    printf("  ------------- \n");
     counter++;
     printf("vous voulez ajouter un autre livre ? \n");
     printf("si oui tapez 1 sinon tapez 0 : ");
     scanf("%d",&repeter);


     if (repeter!=0)
       goto again;

}
// Fonction pour afficher tous les livres disponibles
void Afficher(){
  int i ;
  for(i=0;i<counter;i++){
    printf("le titre du 1iver %d %s \n",i+1,titres[i]);
    printf("l'auteur du livre %s est %s \n",titres[i],auteurs[i]);
    printf("le prix du livre %s est %.2f \n",titres[i],prix[i]);
    printf("la quantite en stock est %d \n",quantites[i]);
    printf("  ------------- \n");
  }
}
// Fonction pour rechercher un livre par son titre
void Rechercher() {
  char titreRech[50];
  int i;

  printf("Entrez le titre du liver : ");
  scanf("%s",titreRech);


  for(i=0;i<counter;i++){
    if(strcasecmp(titres[i],titreRech) == 0){
    printf("le titre du 1iver %d %s \n",i+1,titres[i]);
    printf("l'auteur du livre %s est %s \n",titres[i],auteurs[i]);
    printf("le prix du livre %s est %.2f \n",titres[i],prix[i]);
    printf("la quantite en stock est %d \n",quantites[i]);
    return ;
    }
  }
 printf("Livre non trouve.\n");

}
// Fonction pour modifier la quantité en stock d'un livre
void modifierQ() {
   char titreModif[50];
   int nouvelle_quanti;
   int i;


  printf("Entrez le titre du liver que modifier: ");
  scanf("%s",titreModif);

   for(i=0;i<counter;i++){
    if(strcasecmp(titres[i],titreModif) == 0){
      printf("qu'est ce que la nouvelle quantite ");
      scanf("%d",&nouvelle_quanti);
      quantites[i] = nouvelle_quanti;
       printf("la nouvelle quantite est %d \n",quantites[i]);
      return;
     }
   }

}
// Fonction pour supprimer un livre du stock
 void Supprimer(){
  char titreSup[50];
  int i , j;

 printf("saisez le liver qui vous-voullez supprimer : ");
 scanf("%s",titreSup);

 for(i=0;i<counter;i++){
        if(strcasecmp(titres[i],titreSup)== 0){
    for(j=i;j<counter-1;j++){
        strcpy(titres[j],titres[j+1]);
        strcpy(auteurs[j],auteurs[j+1]);
        prix[j] = prix[j+1];
        quantites[j] = quantites[j+1];
    }
    counter-- ;
 printf("liver %s est supprimer.\n",titres[i]);
    return ;
  }
  }

 }
// Fonction pour afficher le nombre total de livres en stock
void Total(){
   int i , somme ;
   somme = 0 ;
   for(i=0;i<counter;i++){
    somme += quantites[i];
   }
   printf("le nombre total de livres en stock est %d ",somme);
}