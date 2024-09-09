#include<stdio.h>
#include<string.h>
#include "header.h"






int main() {

    int choix ;
    choix = 0 ;
   do{
   printf("------------menu-----------\n");
   printf("1. Ajouter un Livre au Stock.\n");
   printf("2. Afficher Tous les Livres Disponibles.\n");
   printf("3. Rechercher un livre par son titre.");
   printf("4. Mettre a Jour la Quantité d'un Livre.\n");
   printf("5. Supprimer un Livre du Stock.\n");
   printf("6. Afficher le Nombre Total de Livres en Stock.\n");

   printf("       que souhaitez vous faire\n     ");
   scanf("%d",&choix);// Saisie du choix de l'utilisateur

   // Exécution des fonctions selon le choix
   switch(choix){
   case 1 :
       Ajouter();

         break;
   case 2 :
       Afficher();
       break;
   case 3 :
    Rechercher();

    break;
   case 4:
    modifierQ();
    break;
   case 5 :
    Supprimer();
    break;
   case 6 :
    Total();
    break;
   default :
    printf("il n'y a pas cette le nomber sur menu");
     break;
   }
     // Demande à l'utilisateur 1 s'il veut afficher le menu à nouveau
    printf(" est ce que vous-affichez le menu \n");
    printf("si vollez-vous afficher le menu ,ecrivez 1 si non 0 :");
    scanf("%d",&repeter);
 //      if(repeter == 0)
   //       return 0;// Sortie du programme si l'utilisateur choisit 0

}while(repeter != 0);


return 0;
}
