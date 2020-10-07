# Números de Catalan
Os números de Catalan são definidos pela seguinte recursão:


<img src="https://latex.codecogs.com/svg.latex?C(n) = \begin{cases}1,&n=0\\\ \frac{2(2n-1)}{n+1}C(n-1) & n > 0\end{cases}">



Alguns números desta sequência são: 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786...

O número de Catalan está associado com vários problemas de contagem. Por exemplo, $C(n)$ conta o número de expressões contendo n pares de parantêses que estão corretamente balanceada.

| n | C(n) | Expressões                         |
|---|------|------------------------------------|
| 1 | 1    | ()                                 |
| 2 | 2    | ()(),(())                          |
| 3 | 5    | ()()(),()(()),(()()),((())),(())() |



**Entrada**

Uma linha contendo um inteiro n representando o índice de um número de Catalan.

**Saída**

Imprima uma linha contendo n-ésimo número de Catalan.

Entrada
```
5
```

Saída
```
42
```



