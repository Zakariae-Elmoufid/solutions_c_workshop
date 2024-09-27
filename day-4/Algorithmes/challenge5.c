#include <stdio.h>

int Fusion(int T[], int left, int right, int medium);

 void TriFusion(int T[],int left, int right){
       if(left<right){
        int medium = (left+right)/2;
        TriFusion(T,left,medium);
        TriFusion(T,medium+1,right);
        Fusion(T,left,right,medium);
       }
 }

int Fusion(int T[],int left ,int right,int medium){
      int i , j , k ,sub1,sub2;
      sub1 = medium - left + 1 ;
      sub2 =  right - medium;
      int   Tl[sub1] , Tr[sub2];

      for(i=0;i<sub1;i++)
        Tl[i] = T[left+i];
      for(j=0;j<sub2;j++)
        Tr[j] = T[medium+1+j];

      i=0;
      j=0;
      k=left;

      while(i<sub1 && j<sub2){
            if(Tl[i]<=Tr[j]){
               T[k] = Tl[i];
               i++;
            }else{
               T[k] = Tr[j];
               j++;
            }
            k++;
      }
      while(i<sub1){
            T[k] = Tl[i];
               i++;
               k++;
      }
      while(j<sub2){
             T[k] = Tr[j];
             j++;
             k++;
      }
 
  for(i=0;i<right;i++){
      return T[i];
  }

}


int main(){

     int T[] = {12,3,5,16,2,9};
     int  i , N ;
     N = sizeof(T)/sizeof(T[0]);

       for(i=0;i<N;i++){
            printf("%d ",T[i]);
      }


      TriFusion(T,0,N-1);
      printf("\n");
      printf("Tableau trie : ");
      for(i=0;i<N;i++){
            printf("%d ",T[i]);
      }
    


    return 0;
}