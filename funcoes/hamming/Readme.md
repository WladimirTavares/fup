### Distância de Hamming

Uma mutação é simplesmente um erro que ocorre durante a criação ou cópia de um ácido nucléico, em particular do DNA. Como os ácidos nucléicos são vitais para as funções celulares, as mutações tendem a causar um efeito cascata em toda a célula. Embora as mutações sejam tecnicamente erros, uma mutação muito rara pode equipar a célula com um atributo benéfico. Na verdade, os macro efeitos da evolução são atribuíveis ao resultado acumulado de mutações microscópicas benéficas ao longo de muitas gerações.

O tipo mais simples e comum de mutação de ácido nucleico é uma mutação pontual, que substitui uma base por outra em um único nucleotídeo.

Faça uma função em C com o seguinte prótotipo:
```C
int hamming(char s1[], char s2[], int n);
```
A função `hamming(s1,s2,n)` devolve o  o número de diferenças entre duas fitas homólogas de DNA retiradas de genomas diferentes com um ancestral comum, obtemos uma medida do número mínimo de mutações pontuais que poderiam ter ocorrido no caminho evolutivo entre as duas fitas. Esse número é chamado de 'distância de Hamming'.

Ele pode ser encontrado comparando duas fitas de DNA e contando quantos dos nucleotídeos são diferentes de seus equivalentes na outra fita.
```
GAGCCTACTAACGGGAT
CATCGTAATGACGGCCT
^ ^ ^  ^ ^    ^^
```
A distância de Hamming entre essas duas fitas de DNA é 7.









Fonte: exercismo.io 
