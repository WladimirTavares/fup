# Vacas Agressivas

Guthyerri está construindo um novo estábulo com N (2 <= N <= 100.000) baias. As baias estão localizadas ao longo de uma linha reta nas posições x1, ..., xN (0 <= xi <= 1.000.000.000).

Porém, suas C vacas  (2 <= C <= N) não gostaram desse layout de estábulo e tornaram-se agressivas umas com as outras quando colocadas em um estábulo. Para evitar que as vacas se machuquem, Guthyerri quer colocá-las nas baias, de forma que a menor distância entre duas delas seja a maior possível. Qual é a maior distância mínima?

**Entrada**

A primeira linha contém dois inteiros N e C, representando o número de baias e o número de vacas.

A segunda linhas contém N número inteiro representando a localização de uma baia.


**Saída**

Imprima um inteiro representando a maior distância mínima.

**Exemplo de Entrada**
```
5 3
1 2 8 4 9
```

**Exemplo de Saída**
```
3
```

**Explicação**

Guthyerri pode colocar suas 3 vacas nas baias nas posições 1, 4 e 8, resultando em uma distância mínima de 3.

**Dica**

Defina uma função F(x) tal que F(x) = 1 se for possível organizar as vacas em baias de modo que a distância entre quaisquer duas vacas seja pelo menos x. F(x) = 0, caso contário. 

