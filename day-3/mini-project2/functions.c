#include<stdio.h>
#include<string.h>
#include "header.h"

#define maxContacts 50
int counter = 0;
struct contact con[maxContacts];



void Ajouter(){

int repeter = 0;
   encore:

    printf("Entrez le nom : ");
    scanf("%s",con[counter].Nom);
    printf("Entrez le numero de telephone : ");
    scanf(" %s",con[counter].Numero);
    printf("Entrez l'adresse e-mail : ");
    scanf("%s",con[counter].Email);
    counter++;

     printf("vous voulez ajouter un autre contact? \n");
     printf("si oui tapez 1 sinon tapez 0 : ");
     scanf("%d",&repeter);

     if(repeter!=0)
        goto encore ;
}

void Afficher(){
   int i=0;
   while(i<counter){
    printf("\n");
    printf("le nom de contact %d est %s.\n",i+1,con[i].Nom);
    printf("le numero de telephone est %s.\n",con[i].Numero);
    printf("l'adresse e-mail est %s.\n",con[i].Email);
    printf("\n");
    i++;
   }
}

void Modifier(){
  char nomContatct[30];
  int i ;

  printf("veuillez saisir le nom que vous voulez modifier");
  scanf("%s",nomContatct);

  for(i=0;i<counter;i++){
    if(strcasecmp(con[i].Nom,nomContatct)==0){
        printf("Entrez le nouveau nom : ");
        scanf("%s",con[i].Nom);
        printf("Entrez le nouveau numero de telephone : ");
        scanf("%s",con[i].Numero);
        printf("Entrez la nouvelle adresse e-mail : ");
        scanf("%s",con[i].Email);
        printf("contact modifie avec succes.");
        return;
    }
  }
  printf("Ce contact n'existe pas");
}

void Supprimer(){
 char nomSupprime[30];
 int i,j;

   printf("veuillez saisir contact que vous voulez supprimer :");
   scanf("%s",nomSupprime);

   for(i=0;i<counter;i++){
    if(strcasecmp(con[i].Nom,nomSupprime)==0){
        for(j=i;j<counter-1;j++){
         strcpy(con[j].Nom,con[j+1].Nom);
         strcpy(con[j].Numero,con[j+1].Numero);
         strcpy(con[j].Email,con[j+1].Email);

         }
      counter--;
     return;
     printf(" ce contact supprime avec succes.\n");
    }
   }
    printf("Ce contact n'existe pas");
}

void Rechercher(){
   char nomRecherche[30];
   int i ;

   printf("saisir contact que vous voulez Rechercher");
   scanf("%s",nomRecherche);

   
   for(i=0;i<counter;i++){
    if(strcasecmp(con[i].Nom,nomRecherche)==0){
      printf("le nom de contact est %s.\n",con[i].Nom);
      printf("le numero de telephone est %s.\n",con[i].Numero);
      printf("l'adresse e-mail est %s.\n",con[i].Email);
      printf("\n");
    return;
    }
    
   }

}
