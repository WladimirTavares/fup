# Criando Matrizes 

Uma matriz pode ser expressada de maneira implícita através de uma fórmula utilizada para determina seus elementos. Por exemplo,

<img src="https://latex.codecogs.com/svg.latex?(a_{i,j}) \mbox{ tal que } a_{i,j} = 2*i + j">

Se a matriz <img src="https://latex.codecogs.com/svg.latex?A_{2 \times 3}"> pode ser expressada explicitamente:

<img src="https://latex.codecogs.com/svg.latex?\bigl(\begin{smallmatrix}
a_{1,1} & a_{1,2} & a_{1,3}\\ 
a_{2,1} & a_{2,2} & a_{2,3}
\end{smallmatrix}\bigr)=\bigl(\begin{smallmatrix}
3 & 4 & 5\\ 
5 & 6 & 7
\end{smallmatrix}\bigr)">

A sua tarefa é construir a função que devolva uma matriz construída com a relação acima dado o número de linhas e colunas da matriz 

Você não precisa fazer a entrada e saída do programa. O arquivo no Moodle é o seguinte:

```C
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

```
Você só precisa submeter a função 
```
Matrix matriz(int n, int m);
```

**Exemplo de Entrada**
```
4 5
```
**Exemplo de Saída**
```
3 4 5 6 7 
5 6 7 8 9 
7 8 9 10 11 
9 10 11 12 13 
```





