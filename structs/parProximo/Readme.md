# Par Mais Próximo

Considere o seguinte tipo de registro que deve ser usado em seu programa:

```C
typedef struct{
     float x; 
     float y;
}Ponto;
```

Implemente um função que recebe n pontos distintos e um `Ponto p` e devolva o ponto mais próximo de p entre os n pontos distintos. A função tem o seguint protótipo:

```C
Ponto proximo(Ponto vetor[], int n, Ponto p);
```

Dica: Para isso, implemente uma função que recebe dois pontos e calcule a distância entre esse dois pontos.

```C
float distancia(Ponto p1, Ponto p2);
```

O programa principal é o seguinte:

```C
#include <stdio.h>
#include <math.h>

typedef struct {
	float x,y;
} Ponto;

Ponto proximo(Ponto vetor[], int n, Ponto p);

int main(){
	
	Ponto p = {2,4};
	Ponto vet[] = { {3,6}, {1,6}, {5,7}, {3,9}, {4,9} };
	Ponto q = proximo(vet, 5, p);
	printf("%.2f %.2f\n", q.x, q.y); //3.00 6.00 
}
```



