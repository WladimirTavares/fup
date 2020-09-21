# TapiocaSort

Preparar a pilha perfeita de tapiocas é uma tarefa complicada, porque não importa como você tenta todas as tapiocas em qualquer pilha têm diâmetros diferentes. Para o bem da limpeza, no entanto, você pode ordenar a pilha por tamanho de forma que cada tapioca seja menor do que todos os panquecas abaixo dela. O tamanho de uma panqueca é dado pelo seu diâmetro.

A ordenação de uma pilha é feita por uma sequência de "viradas" de tapiocas. Uma virada consiste em inserir uma espátula entre duas tapiocas em uma pilha e virando (invertendo) todas as panquecas em a espátula (invertendo a subpilha). 

Uma virada é especificado dando a posição da tapioca na parte inferior da subpilha a ser virada em relação a toda a pilha. A panqueca de baixo tem a posição 1, enquanto a panqueca de cima em uma pilha de n panquecas tem posição n.

Uma pilha é especificada dando o diâmetro de cada tapioca na pilha na ordem em que aparecem as tapiocas. Por exemplo, considere uma pilha de  tapiocas abaixo em que a tapioca 5 é a primeira tapioca do vetor:

topo -> 5 1 2 3 4 |

Fazendo a operação `virada 1` (a espátula está representada por |), obtemos a seguinte pilha de tapiocas:

topo -> 4 3 2 1 | 5

Fazendo a operação `virada 2`, obtemos a seguinte pilha de tapiocas:

topo -> 1 2 3 4 5

Observe que a pilha de tapioca pode ser ordenada utilizando duas operações de virada.



## Entrada

A primeira linha da entrada contém um inteiro N representando o número de tapiocas. 

A segunda linha contém N inteiros positivos representando uma pilha de tapiocas. Cada tapioca terá um diâmetro entre 1 e 30.



## Saída

Seu programa deve imprimir uma sequência de viradas que resulte na pilha de tapioca ordenada de maneira que a maior tapioca está na parte inferior e a menor tapioca na parte superior. A sequência de viradas deve terminar com 0, indicando que não são mais necessárias viradas.

Exemplo de Entrada
```
5
5 1 2 3 4
```

Exemplo de Saída
```
1 2 0
```

Exemplo de Entrada
```
5
5 4 3 2 1
```

Exemplo de Saída
```
1 0
```



