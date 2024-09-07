#include<stdio.h>
#include<string.h>
// Définition de la taille maximale de la bibliothèque
#define liver 20

char titres[liver][50];
char auteurs[liver][50];
float prix[liver];
int quantites[liver];
int counter = 0 ;
int repeter ;




// Fonction pour ajouter des livres dans le stock
void Ajouter(){
    printf("saisir le nomber du liver ce que vous-voulez : ");
    scanf("%d",&counter);

  int i ;
  for(i=0;i<counter;i++){
    printf("saisiz le titre du livre %d : ",i+1);
    scanf(" %s",titres[i]);
    printf("saisir l'auteur du livre: ");
    scanf(" %s",auteurs[i]);
    printf("saisir le prix du livre: ");
    scanf("%f", &prix[i]);
    printf("saisir la quantite en stock: ");
    scanf("%d", &quantites[i]);
    printf("  ------------- \n");
  }
  if(counter>=liver){
  printf("Le stock est plein!\n");
    }
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
    if(strcmp(titres[i],titreRech) == 0){
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
    if(strcmp(titres[i],titreModif) == 0){
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
        if(strcmp(titres[i],titreSup)== 0){
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
    printf("si vollez-vous afficher le menu ,ecrivez 1 si non 0");
    scanf("%d",&repeter);
       if(repeter == 0)
          return 0;// Sortie du programme si l'utilisateur choisit 0

}while(repeter != 0);


return 0;
}
