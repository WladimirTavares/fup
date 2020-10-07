## #ponteiros L2 - Função que retorna vários valores por referência


<img src="https://github.com/qxcodefup/arcade/blob/master/base/144/__capa.jpg?raw=true">


## Motivação

Quando precisamos que uma função retorne vários valores, temos duas opções:
1) Retornar uma estrutura, onde cada campo armazena um valor que desejamos retornar na função; ou
2) Passar variáveis por referência, que receberão os valores que desejamos retornar.

Neste exemplo vamos considerar o 2o caso (passar resultados por referência).
Implemente a função 'converte_tempo', que recebe o tempo em segundos e retorna em 3 variáveis passadas por referência este tempo convertido em horas, minutos e segundos.

O arquivo de envio já terá parte do código preenchido, veja abaixo:

```C
#include <stdio.h>

// Recebe tempo em 'segundos', converte para horas, minutos e seguntos, e 
// retorna o resultado através dos parâmetros 'hor', 'min' e 'seg'.
void converte_tempo(int segundos, int *hor, int *min, int *seg);

int main(){
   int tempo, h, m, s;
   scanf("%d", &tempo);

   // Chame a função 'converte_tempo' para converter o valor de 'tempo' em horas
   // minutos e segundos, gravando o resultado nas variáveis 'h', 'm' e 's'.
	 converte_tempo(tempo, &h, &m, &s); 		
				

   printf("%d:%d:%d", h, m, s);
}

```

## Ação

Você deverá implementar somente a função 'converte_tempo'.

## Exemplos

```
>>>>>>>>
7384
========
2:3:4
<<<<<<<<

>>>>>>>>
3601
========
1:0:1
<<<<<<<<

>>>>>>>>
60
========
0:1:0
<<<<<<<<
```

#
