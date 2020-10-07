# Binômio de Newton

A fórmula do Binômio de Newton permite escrever uma expansão algébrica da potência de um binômio. Os casos mais estudados da fórmula do binômio de Newton são os seguintes:

* <img src="https://latex.codecogs.com/svg.latex?(x+y)^2 = x^2 + 2xy + y^2">

* <img src="https://latex.codecogs.com/svg.latex?(x+y)^3 = x^3 + 3x^2y + 3xy^2+y^3">

A fórmula do Binômio de Newton pode ser descrita da seguinte maneira:

<img src="https://latex.codecogs.com/svg.latex?(x+y)^n = \sum_{k=0}^{n} C(n,k) x^{n-k}y^k">

onde `C(n,k)` são os coeficientes binomiais.

Sua tarefa é dada um inteiro n, escreva a fórmula do binômio de Newton para n dado.

**Entrada**

Uma linha contendo um inteiro n.

**Saída**

Imprima a fórmula do binômio do Newton para n.

**Exemplo de Entrada**
```
5
```
**Exemplo de Saída**
```
(x+y)^5 = x^5 + 5x^4y^1 + 10x^3y^2 + 10x^2y^3 + 5x^1y^4 + y^5
```


**Exemplo de Entrada**
```
8
```
**Exemplo de Saída**
```
(x+y)^8 = x^8 + 8x^7y^1 + 28x^6y^2 + 56x^5y^3 + 70x^4y^4 + 56x^3y^5 + 28x^2y^6 + 8x^1y^7 + y^8
```