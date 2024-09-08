#include<stdio.h>

// Créer une structure
struct note_etudiant{
      char nom[30] ;
      char prenom[30];
      float note[30];
};

int main() {

  struct note_etudiant s1 ;

  s1.nom[30];
  s1.prenom[30];
  s1.note[6];

  int i , N ;

  // Demande à l'utilisateur saisir la node d'etudiant
    printf("Entrez le nom : ");
    scanf("%s",s1.nom);
    printf("Entrez le prenom : ");
    scanf("%s",s1.prenom);

    //saisir le nombre d'elements d'un tableau
    printf("Entrez le nomber des notes que vous souhaitez inscrire : ");
    scanf("%d",&N);

    // saisir les elements de tablaeu
    for( i=0;i<N;i++){
    printf("Entrez la note %d : ",i+1);
    scanf("%f",&s1.note[i]);
    }
    // Afficher la valeur de variable
    printf("le nom est %s \n",s1.nom);
    printf("le prenom est %s \n",s1.prenom);
    printf("les note de %s sont ",s1.nom);
    for(i=0;i<N;i++){
    printf("%.2f  ",s1.note[i]);
    }
return 0;
}
