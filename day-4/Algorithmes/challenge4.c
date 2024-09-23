#include <stdio.h>


// low : l'indice de départ du sous-tableau
// high : l'indice de fin du sous-tableau
void TriRapide(int T[], int low , int high){
    if(low<high){
        // Trouver l'indice du pivot après partitionnement
        int Pindex = partition(T,low,high);
        // Tri du sous-tableau à gauche du pivot
        TriRapide(T,low,Pindex-1);
        // Tri du sous-tableau à droite du pivot
        TriRapide(T,Pindex+1,high);

    }
}
// Fonction pour partitionner le tableau et placer le pivot au bon endroit
int partition(int T[], int low, int high){
      int pivot = T[high];
      int i , j , swap ;
      i = low-1 ;
      
      for(j=low;j<high;j++){
        if(T[j]<=pivot){
            i++;
            swap = T[i];
            T[i] = T[j];
            T[j] = swap;
        }
      }
      swap = T[i+1];
      T[i+1] = T[high];
      T[high] = swap ;
      
      return i+1 ;
}

int main (){
     
     int T[] = {12,3,5,16,2,9};
     int N = sizeof(T)/sizeof(T[0]);
     int i , j , swap , pivot;
     int low = 0 , high = N-1;

   

     TriRapide(T,0,N-1);
     
     for(i=0;i<N;i++){
        printf("%d|",T[i]);
     }
     
    return 0;
}