
#include <stdio.h>

//creer un structur
struct rectangle{
   int  longueur ;
   int largeur ;
};

//utiler un  function pour calculer la valeur de variable entre stractur
int function(struct rectangle rec){
    return rec.longueur * rec.largeur ;


}

int main()
{
    // Créer une variable de structureappelée s1
    struct rectangle s1 ;
    s1.longueur ;
    s1.largeur ;
    //demande a l'utilisateur saisir longueur et largeur
    printf("Entrez longueur de rectangle ");
    scanf("%d",&s1.longueur);
    printf("Entrez largeur de rectangle ");
    scanf("%d",&s1.largeur);


    printf("%d",function(s1));

    return 0;
}