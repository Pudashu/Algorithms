#include <stdio.h>
#define number 10

typedef struct{
  int i,j;
  int v;
}Triple;

typedef struct{
  Triple data[number];
  int rows,cols,nums;
}COO;

int FastTransposeSMatrix(COO M,COO &T){
  T.rows = M.cols;
  T.cols = M.rows;
  T.nums = M.nums;
  int Array[M.cols+1];//Save the numbers of nonzero elements in i cols
  int cpot[M.cols+1];/*Save the position where should the Matrix's j column put in the 
  Transpose Matrix's row ()*/
  int p , q ;
  if(T.nums){
	for(int cols = 1 ; cols <= M.cols ; ++cols){
	  Array[cols] = 0;
	}//Init;
	for(int i = 1; i<M.nums ; i++){
	  ++Array[M.data[i].j];
	}//Creation
	cpot[1] = 1;
	for (int cols = 2; cols <= M.cols ; cols++){
	  cpot[cols] = cpot[cols-1] + Array[cols-1];
	}//Creation 2
	for(p = 1 ; p<=M.nums ; p++){
	  int col = M.data[p].j;
	  q = cpot[col]++;
	  T.data[q].i = M.data[p].j;
	  T.data[q].j = M.data[p].i;
	  T.data[q].v = M.data[p].v;
	}
  }
  return OK;
}
