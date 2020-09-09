#include <stdio.h>

int soma_multiplos(int v[], int n, int limite);

int main() { 
  
  int n, limite;
  scanf("%d %d", &n, &limite);
  int v[n];
  for(int i = 0; i < n; i++)
		scanf("%d", &v[i]);
  printf("%d\n", soma_multiplos(v, n, limite) );
  return 0;
}


int soma_multiplos(int v[], int n, int limite){
	
	int soma = 0;
	
	for(int i = 1; i < limite; i++){
		for(int j = 0; j < n; j++){
			if(i%v[j] == 0){
				soma += i;
				break;
			}	
		}
	}
	
	return soma;
	

}
