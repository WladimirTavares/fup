#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int rows;
	int cols;
	int **elem;
} Matrix;

Matrix matriz(int n, int m);

int main(){
	int n, m;
	Matrix A;
	
	scanf("%d %d", &n, &m);
	
	A = matriz(n, m);
	
	for(int i = 0; i < A.rows; i++){
		for(int j = 0; j < A.cols; j++){
			printf("%d ", A.elem[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

Matrix matriz(int n, int m){
	Matrix M;
	
	M.rows = n;
	M.cols = m;
	
	//Alocação Dinâmica de Memória
	
	// aloca um vetor de M.rows ponteiros para vetor de inteiros para linhas
	M.elem = (int**) malloc (M.rows * sizeof (int*)) ; 
	
	// aloca cada uma das linhas (vetores de M.cols inteiros)
	for (int i=0; i < M.rows; i++)
   M.elem[i] = (int*)malloc (M.cols * sizeof (int)) ;
	
	
	for(int i = 0; i < M.rows; i++){
		for(int j = 0; j < M.cols; j++){
			M.elem[i][j] = 2*(i+1) + (j+1);
		}
	}
	
	return M;

}

