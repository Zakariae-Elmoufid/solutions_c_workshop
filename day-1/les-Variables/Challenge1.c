#include<stdio.h>


int main() {

char nom[20], prenom[20] , email[50] ;
char sexe ;
int age ;

printf("veuillez saiser le nom : ");
scanf("%s",nom );
printf("veuillez saiser le prenom : ");
scanf("%s",prenom );
printf("veuillez saiser l'age : ");
scanf("%d",&age);
printf("veuillez entrer sexe:");
scanf(" %c",&sexe);
printf("veuillez saisir l'adresse email :");
scanf("%s",email);


printf("\n le nom est %s \n le prenom est %s \n l'age est %d  \n le sexe est %c \n l'adresse de email est %s",nom,prenom,age,sexe,email);

return 0;
}
