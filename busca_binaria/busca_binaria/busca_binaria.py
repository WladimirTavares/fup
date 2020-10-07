
def busca_binaria(vetor, n, item):
  inicio = 0
  fim   = n - 1
  contador = 0
  while inicio <= fim:
    meio = (inicio + fim)//2
    contador = contador + 1
    #print ("inicio %d, fim %d, meio %d, contador %d" % (inicio, fim, meio, contador) )    
    if vetor[meio] == item:
      return contador             
    else:
      if vetor[meio] > item:
        fim = meio - 1
      else:
        inicio = meio + 1
  return contador


  


if __name__ == "__main__":
  v = [2, 3 , 4 , 8, 10, 45, 54, 72]
  q = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]
  
  for x in q:
    print ( busca_binaria(v, len(v), x) )  




