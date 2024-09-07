#include <stdio.h>



int main(){

int i , N;
int T[]  = {1,2,3,4,5};
N = sizeof(T)/sizeof(T[0]) ;


for(i=0;i<N;i++){
    printf("%d \n",T[i]);
}
    return 0;
}

