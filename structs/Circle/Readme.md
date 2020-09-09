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

```C
double perimetro(Circ circ);
```
A função `perimetro` devolve o comprimento da circunferência do círculo cir.

```C
double area(Circ circ);
```
A função area devolve a área do círculo circ.


A função principal do seu programa é a seguinte:

```C
```





