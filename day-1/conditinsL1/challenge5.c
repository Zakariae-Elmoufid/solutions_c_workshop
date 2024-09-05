#include<stdio.h>



int main() {

int annee ;
int mois ,jours ,heures ,minutes ,secondes;

printf("veuillez saisir le nomber d'annee : ");
scanf("%d",&annee);

mois  = annee * 12;
jours = mois * 30;
heures = jours * 24 ;
minutes = heures * 60;
secondes = minutes * 60;

printf("le nomber des mois sont %d \n",mois);
printf("le nomber des jours sont %d \n",jours);
printf("le nomber de heures sont %d \n",heures);
printf("le nomber de minutes sont %d \n",minutes);
printf("le nomber de secondes sont %d \n",secondes);


return 0;
}
