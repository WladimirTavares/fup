### Número de grãos

Era uma vez um servo sábio que salvou a vida de um príncipe. O rei prometeu pagar tudo o que o servo pudesse sonhar. Sabendo que o rei adorava xadrez, o servo disse ao rei que gostaria de grãos de trigo. Um grão na primeira casa de um tabuleiro de xadrez. Dois grãos no próximo. Quatro no terceiro e assim por diante.

Faça uma função em C com o seguinte prótotipo:
```C
long long numero_graos(int ano);
```

A função `numero_grãos(n)`devolve o número de grãos de trigos que o rei deve ter para conseguir pagar o servo que salvou a vida do príncipe se ele parasse na n-ésima casa do tabuleiro de xadrez.
```C
#include <stdio.h>
#include <assert.h>

long long numero_graos(int n);

int main(){
	assert( numero_graos(1) == 1LL );
	assert( numero_graos(2) == 3LL );
	assert( numero_graos(3) == 7LL );
	assert( numero_graos(4) == 15LL );
	assert( numero_graos(63) == 9223372036854775807LL );
}
```
Fonte: exercismo.io 


