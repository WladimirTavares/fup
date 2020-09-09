### Maior Salto
Dado uma lista de números inteiros, definiremos o maior salto como o maior valor das diferenças (em valor absoluto) entre números consecutivos da lista. Por exemplo, dada uma lista [2,5,-3,7]

-   3 (valor absoluto de (2 - 5) )
-   8 (valor absoluto de (5 - (-3)) )
-   10 (valor absoluto de (-3 - 7) )

Portanto o maior salto é 10.  O maior salto não esta definido para uma lista com menos de 2 elementos.

Faça uma função em C com o seguinte prótotipo:
```C
int maior_salto(int v[], int n);
```

