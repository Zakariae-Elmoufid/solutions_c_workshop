#ifndef header_h
#define header_h


#define maxContacts 50


struct contact
{
   char Nom[30];
   char Numero[30];
   char Email[30];
};
extern struct contact con[maxContacts];
extern    int counter  ;



void Ajouter();
void Afficher();
void Rechercher();
void Modifier();
void Supprimer();

#endif