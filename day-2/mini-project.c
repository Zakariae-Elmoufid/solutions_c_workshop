#include<stdio.h>
#define liver 20

char titres[liver][50];
char auteurs[liver][50];
float prix[liver];
int quantites[liver];
int counter = 0 ;

void Ajouter(){
  int i ;
  for(i=0;i<counter;i++){
    printf("saisiz le titre du livre %d : ",i+1);
    scanf(" %s",titres[i]);
    printf("saisir l'auteur du livre: ");
    scanf(" %s",auteurs[i]);
    printf("Entrez le prix du livre: ");
    scanf("%f", &prix[i]);
    printf("Entrez la quantite en stock: ");
    scanf("%d", &quantites[i]);
    printf("  ------------- \n");
  }
  if(counter>=liver){
  printf("Le stock est plein!\n");
    }
}

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

int main() {
    printf("saisir le nomber du liver ce que vous-voulez : ");
    scanf("%d",&counter);
    Ajouter();
    Afficher();

return 0;
}
