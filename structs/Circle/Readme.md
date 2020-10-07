# Círculo

Um círculo pode ser descrito pelo ponto  do centro e o raio. Observe que todos os pontos dentro do círculo estão com uma distância inferior ao raio.  

```C
typedef struct  {
    double x, y;
} Ponto;

typedef struct {
   Ponto C;
   double raio; 
} Circulo;
```

Construa as seguintes funções com os seguintes protótipos:

```C
int dentro(Circulo circ, Ponto p);
```

A função dentro devolve 1 se o ponto p está dentro do círculo rete 0, caso contrário.


A função principal do seu programa é a seguinte:

```C
#include <stdio.h>

typedef struct  {
    int x, y;
} Ponto;

typedef struct {
   Ponto supEsq;
   Ponto infDir; 
} Retangulo;

int dentro(Retangulo r, Ponto p);


int main(){
	
	Retangulo r = {0,5,5,0};
	Ponto p1 = {2,2};
	printf("%d\n", dentro(r,p1) ); //1
	Ponto p2 = {2,7};
	printf("%d\n", dentro(r,p2) ); //0
	Ponto p3 = {-1,4};
	printf("%d\n", dentro(r,p3) ); //0
	Ponto p4 = {2,-1};
	printf("%d\n", dentro(r,p4) ); //0
	Ponto p5 = {5,5};
	printf("%d\n", dentro(r,p5) ); //1
}
```





