#include <stdio.h>
#include <stdlib.h>

void Matrix_Mul(int *A, int *B, int * C,int M , int N , int K){
  C = (int *)malloc(M*K*sizeof(int));
  int sum = 0;
  for(int i = 0 ; i < M ; i++){
	for (int j = 0; j < K ; j++){
	  for(int p = 0 ; p < N ; p++){
		sum += A[i*N + p] * B[j*K + p];
	  }
	  C[i*K + j] = sum;
	  sum = 0;
	}
  }
}
