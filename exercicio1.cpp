#include <stdio.h>
#include <stdlib.h>

int main(){
  int A[] = {1,0,5,-2,-5,7};
  int soma = A[0] + A[1] + A[5];
  
   printf("%d\n", soma);
   
   A[4] = 100;
   
  for(int i = 0; i < 6; i++){
  	printf("%d\n", A[i]);
  }
}
