# Fração

Uma fração pode ser definida por dois inteiros `num` e `den`. O primeiro representando o numerador e o segundo o denominador. Considere a seguinte definição de fração:

```C
typedef struct {
    int num,den;
}Fracao;

typedef enum { LT, EQ, GT} compare;
```

Construa as seguintes funções os seguintes protótipos:

```C
compare comparaFracao(Fracao f1, Fracao f2);
``` 

A função `comparaFracao(f1,f2)` devolve LT se f1 é menor que f2, GT se f1 é maior que f2 e EQ se f1 é igual a f2.

```C
Fracao somaFracao(Fracao f1, Fracao f2);
``` 

A função `somaFracao(f1,f2)` devolve a soma de f1 e f2.

```C
Fracao subtrFracao(Fracao f1, Fracao f2);
``` 

A função `subtrFracao(f1,f2)` devolve a subtracao de f1 e f2.

```C
Fracao multFracao(Fracao f1, Fracao f2);
``` 

A função `multFracao(f1,f2)` devolve a multiplicação de f1 e f2.

```C
Fracao divideFracao(Fracao f1, Fracao f2);
``` 
A função `divideFracao(f1,f2)` devolve a multiplicação de f1 e f2.

```C
Fracao inversoFracao(Fracao f1, Fracao f2);
``` 
A função `inversoFracao(f1)` devolve o inverso de um fração.

```C
Fracao reduzFracao(Fracao f1, Fracao f2);
``` 
A função `reduzFracao(f1)` devolve a forma irredutível da fração.

Exemplo de utilização:

```C
#include <stdio.h>
typedef struct {
    int num,den;
}Fracao;
typedef enum { LT, EQ, GT} compare;
void mostraFracao(Fracao f1){
	printf("%d/%d\n", f1.num, f1.den);
}
compare comparaFracao(Fracao f1, Fracao f2);
Fracao somaFracao(Fracao f1, Fracao f2);
Fracao subtrFracao(Fracao f1, Fracao f2);
Fracao multFracao(Fracao f1, Fracao f2);
Fracao inversoFracao(Fracao f1);
Fracao divideFracao(Fracao f1, Fracao f2);
Fracao reduzFracao(Fracao f1);

int main(){
  	int num1, den1, num2, den2;
  	scanf("%d %d", &num1, &den1);
  	scanf("%d %d", &num2, &den2);
  	Fracao f1 = { num1, den1};
	Fracao f2 = { num2, den2};
  	mostraFracao( reduzFracao( somaFracao(f1,f2) ) ); 
	mostraFracao( reduzFracao( subtrFracao(f1,f2) ) ); 
	mostraFracao( reduzFracao( multFracao(f1,f2) ) ); 
	mostraFracao( reduzFracao( divideFracao(f1,f2) ) ); 
	mostraFracao( reduzFracao( inversoFracao(f1) ) );
	mostraFracao( reduzFracao( inversoFracao(f2) ) );
}
```

Dica: Na função reduzFracao, utilize a função `mdc(a,b)` para calcular o maior divisor comum.

```C
int mdc(int a, int b){
	while(b!=0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

```

Dicas:

* <img src="https://latex.codecogs.com/svg.latex?\frac{a}{b}+\frac{c}{d} = \frac{ad}{bd} + \frac{cb}{db} = \frac{ad+cb}{bd}">

* <img src="https://latex.codecogs.com/svg.latex?\frac{a}{b}-\frac{c}{d} = \frac{ad}{bd} - \frac{cb}{db} = \frac{ad-cb}{bd}">

* <img src="https://latex.codecogs.com/svg.latex?\frac{a}{b}*\frac{c}{d} = \frac{ac}{bd}">

* <img src="https://latex.codecogs.com/svg.latex?\frac{a}{b} \div \frac{c}{d} = \frac{a}{b}*\big(\frac{c}{d}\big)^{(-1)} = \frac{a}{b}*\frac{d}{c}=\frac{ad}{bc}">

* <img src="https://latex.codecogs.com/svg.latex?reduz(\frac{a}{b}) = \frac{a'}{b'}, \mbox{ onde } a' = a/mdc(a,b), b' = b/mdc(a,b)">



















