#include<stdio.h>

// Cr�er une structure appel�e  personne
struct personne {
 char nom[30];
 char prenom[30];
 int age;

};


int main(){
 // Cr�er une variable de structure de personne appel�e s1
  struct personne s1 ;

   s1.nom[30];
   s1.prenom[30];
   s1.age;

// Demande � l'utilisateur saisir l'information personnelle
printf("Entrez le nom : ");
scanf("%s",s1.nom);
printf("Entrez le prenom : ");
scanf("%s",s1.prenom);
printf("Entrez l'age : ");
scanf("%d",&s1.age);

// Afficher la valeur de variable
printf("le nom est %s \n",s1.nom);
printf("le prenom est %s \n",s1.prenom);
printf("l'age est %d \n",s1.age);

return 0;
}
