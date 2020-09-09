Faça uma função em C com o seguinte protótipo:
```C
int bissexto(int ano);
```
A função bissexto devolve 1 se o ano é bissexto. Caso contrário, devolve 0, se o ano não é bissexto.


Um ano bissexto ocorre no calendário gregoriano da seguinte maneira:
```
todo  ano que é divisível por 4
   exceto a cada ano que é  divisível por 100
     a menos que o ano também seja igualmente divisível por 400
```
Por exemplo, 1997 não é um ano bissexto, mas 1996 é. 1900 não é um ano bissexto, mas 2000 é.

```C
#include <stdio.h>
#include <assert.h>
int bissexto(int ano);
int main(){
	assert( bissexto(1997) == 0);
	assert( bissexto(1996) == 1);
	assert( bissexto(1900) == 0);
	assert( bissexto(2000) == 1);
}
```

Fonte: exercismo.io 
