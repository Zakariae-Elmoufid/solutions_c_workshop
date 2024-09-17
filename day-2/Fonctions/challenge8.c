#include <stdio.h>

int parite(int nomber){
    int p ;
    if(nomber%2==0){
      p =  1 ;
    }else{
        p =0;
    }
    return p ;
}

int main(){

    int nomber ;

    printf("Entrez un nomber : ");
    scanf("%d",&nomber);

    printf("--%d ",parite(nomber));


    return 0;
}