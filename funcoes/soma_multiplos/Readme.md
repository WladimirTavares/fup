### Soma Múltiplos

Faça uma função em C com o seguinte prótotipo:
```C
int soma_multiplos(int v[], int n, int limite);
```
A função `soma_multiplos`encontra a soma de todos os números entre `1` e `limite-1` que são múltiplos de algum número do vetor `v` de tamanho `n`.

Se listarmos todos os números naturais abaixo de 20 que são múltiplos de 3 ou 5, obteremos 3, 5, 6, 9, 10, 12, 15 e 18. A soma desses múltiplos é 78.

```C
int soma_multiplos(int v[], int n, int limite);

int main() { 
  int v[] = {3,5};
  printf("%d\n", soma_multiplos(v, 2, 20)); //78
  return 0;
}
```

Fonte: exercismo.io 
