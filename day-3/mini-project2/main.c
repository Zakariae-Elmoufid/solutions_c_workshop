#include <stdio.h>
#include <string.h>
#include "header.h"


int main () {

int choix ;
    choix = 0 ;
    int repeter = 0  ;

    do{
     printf("\nMenu de gestion des contacts :\n");
         printf("1. Ajouter un contact : \n");
         printf("2. Modifier un contact :\n");
         printf("3. Supprimer un contact :\n");
         printf("4. Afficher tous les contacts :\n");
         printf("5. Rechercher un contact :\n");
         printf("Entrez votre choix : ");
         scanf("%d", &choix);


//    // Exécution des fonctions selon le choi
    switch(choix){
    case 1 :
        Ajouter();

          break;
    case 2 :
        Modifier();
        break;
    case 3 :
        Supprimer();
     break;
    case 4 :
       Afficher();
        break;
    case 5 :
        Rechercher();
        break;

    default :
     printf("il n'y a pas cette le nomber sur menu");
      break;
    }

     printf(" est ce que vous-affichez le menu \n");
     printf("si vollez-vous afficher le menu ,ecrivez 1 si non 0 :");
     scanf("%d",&repeter);


 }while(repeter != 0);
     return 0;
}
