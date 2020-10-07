# Busca Binária

Considere a seguinte implementação da busca binária na linguagem Python:

```python
def busca_binaria(vetor, n, item):
  inicio = 0 #inicio do vetor
  fim   = n - 1 # fim do vetor
  contador = 0 # numero de iteracoes para encontrar um elemento no vetor
  while inicio <= fim:
    meio = (inicio + fim)//2 #divisão inteira
    contador = contador + 1
    if vetor[meio] == item:
      break             
    else:
      if vetor[meio] > item:
        fim = meio - 1
      else:
        inicio = meio + 1
  return contador
 ```

 Nesta implementação, a função busca_binaria devolve o número de iterações para encontrar um elemento item no vetor v.

Por exemplo,
```C
v = [2, 3 , 4 , 8, 10, 45, 54, 72]
n = 8
item = 54
```

O algoritmo segue os seguintes passos:
```C
inicio = 0, fim = 7, meio = 3, contador = 1
inicio = 4, fim = 7, meio = 5, contador = 2
inicio = 6, fim = 7, meio = 6, contador = 3
```

O algoritmo encontra o elemento 54 com 3 iterações. Quando o item for igual a 72.

O algoritmo segue os seguintes passos:
```C
inicio = 0, fim = 7, meio = 3, contador = 1
inicio = 4, fim = 7, meio = 5, contador = 2
inicio = 6, fim = 7, meio = 6, contador = 3
inicio = 7, fim = 7, meio = 6, contador = 4
```

O algoritmo encontra o elemento 72 com 4 iterações.


**Entrada**

A primeira linha contém dois inteiros n e m denotando o tamanho do vetor de entrada já ordenado e denotando o número de perguntas que serão realizadas.

A segunda linha contém os inteiros positivos denotando os elementos do vetor.

A terceira linha contém os inteiros positivos que serão buscados no vetor de entrada.

Nota: É garantido que o vetor está ordenado.


**Saída**

Imprima um número inteiro que denota o número de iterações calculado pelo algoritmo acima para cada 

**Exemplo de Entrada**
```
8 4
2 3 4 8 10 45 54 72
8 9 54 72
```
**Exemplo de Saída**
```
1 3 3 4
```








