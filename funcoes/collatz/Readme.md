### Conjectura de Collatz

A conjectura de Collatz ou problema 3x + 1 pode ser resumido da seguinte forma:
```
Pegue qualquer número inteiro positivo n. 
Se n for par, divida n por 2 para obter n / 2. 
Se n for ímpar, multiplique n por 3 e adicione 1 para obter 3n + 1. 
Repita o processo indefinidamente. 
A conjectura afirma que não importa com qual 
número você comece, você 
sempre alcançará 1 eventualmente.
```
Faça uma função em C com o seguinte prótotipo:
```C
int collatz(int n);
```
A função `collatz(n)`devolve o número de etapas necessárias para chegar a 1. Por exemplo,

Exemplos
Começando com n = 12, as etapas seriam as seguintes:
1. 6
2. 3
3. 10
4. 5
5. 16
6. 8
7. 4
8. 2
9. 1
Resultando em 9 etapas.

```C
#include <stdio.h>
#include <assert.h>
int collatz(int n);
int main(){
	assert( collatz(12) == 9 );
}
```

Fonte: exercismo.io 
