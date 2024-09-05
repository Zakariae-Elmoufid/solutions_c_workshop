#include <stdio.h>


   int max(int a , int b){
        int max ;
        if(a>b)
        return a ;
        else
        return b ;
    }

int main() {

    int N1 , N2 ;

 printf("enter le nomber N1 :");
 scanf("%d",&N1);
 printf("enter le nomber N2 :");
 scanf("%d",&N2);

printf("le maximun est %d",max(N1,N2));



    return 0;
}

