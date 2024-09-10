#include <stdio.h>
#include <string.h>

// Déclaration d'une structure 'Livre' pour représenter un livre
struct Livre{
  char Titre[30];
  char Auteur[30];
  int Annee ;
};

// Fonction qui crée et retourne structure de 'Livre'
struct  Livre infoliver(struct Livre li ){

   return li;
}


int main()
{
    // Appel de la fonction  pour créer un livre avec des valeurs spécifiques et stockage du résultat dans 'li'
   struct Livre li;

     // Saisie des informations par l'utilisateur
    printf("Entrez le titre du livre: ");
    scanf("%s",li.Titre);

    printf("Entrez l'auteur du livre: ");
    scanf("%s",li.Auteur);

    printf("Entrez l'annee de publication: ");
    scanf("%d",&li.Annee);

     infoliver(li);

    printf("l'information du liver : \n");
    printf("le titre %s\n",li.Titre);
    printf("l'auteur est %s\n",li.Auteur);
    printf("l'annee est %d\n",li.Annee);



    return 0;
}
