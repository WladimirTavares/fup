# Matriz Identidade 

Na Álgebra Linear, a matriz identide de tamanho n é uma matriz quadrada com uns na diagonal principal e zeros nas outras posições. A matriz identidade de tamanho n é denotado por <img src="https://latex.codecogs.com/svg.latex?I_n">.

A propriedade de multiplicação de matrizes garante que quando <img src="https://latex.codecogs.com/svg.latex?A_{m \times n}"> então

<img src="https://latex.codecogs.com/svg.latex?I_{m}A = AI_{n} = A">

A sua tarefa é construir a função identidade que devolve uma matriz identidade.

Você não precisa fazer a entrada e saída do programa. O arquivo no Moodle é o seguinte:

```C
#include <stdio.h>
#include <stdlib.h> //malloc

typedef struct {
	int rows;
	int cols;
	int **elem;
} Matrix;


Matrix identidade(int n);

int main(){
	int n;
	Matrix M;
	
	scanf("%d", &n);
	
	M = identidade(n);
	
	for(int i = 0; i < M.rows; i++){
		for(int j = 0; j < M.cols; j++){
			printf("%d ", M.elem[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
```
Você só precisa submeter a função 
```
Matrix identidade(int n);
```
Na função identidade, você vai precisar fazer a alocação de memória dinâmica para a matriz. Observe que você não sabe previamente o tamanho da matriz que precisa ser alocada. A alocação dinâmica pode ser realizada da seguinte maneira:

```C
Matrix identidade(int n){
	Matrix M;
	
	M.rows = n;
	M.cols = n;
	
	//Alocação Dinâmica de Memória
	
	// aloca um vetor de M.rows ponteiros para vetor de inteiros para linhas
	M.elem =  malloc (M.rows * sizeof (int*)) ; 
	
	// aloca cada uma das linhas (vetores de M.cols inteiros)
	for (int i=0; i < M.rows; i++)
   M.elem[i] = malloc (M.cols * sizeof (int)) ;
	
	/*
	Construa a matriz identidade em seguida
	*/
	
}
```

**Exemplo de Entrada**
```
5
```
**Exemplo de Saída**
```
1 0 0 0 0 
0 1 0 0 0 
0 0 1 0 0 
0 0 0 1 0 
0 0 0 0 1 
```





