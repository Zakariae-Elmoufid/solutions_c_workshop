#include <stdio.h>

int fibonacci(int n ){

 int i , U0 , U1 ,U;
 
    U0 = 0 ;
    U1 = 1 ;

if(n==0){
    return U0;
}
 if(n==1){
    return U1;
}

   for(i=2;i<=n;i++){
    U  = U0+U1;
    U0 = U1 ;
    U1 = U ;
 }


 return U ;

}
int main(){
    int n , i;
    n = 5 ;

    for(i=0;i<=n;i++)
    printf("%d ",fibonacci(i));
    return 0;
}

