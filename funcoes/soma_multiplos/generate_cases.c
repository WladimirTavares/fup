#include <stdio.h>
#include <stdlib.h> 

int soma_multiplos(int v[], int n, int limite);



int main() { 
  
  for(int i = 1; i <= 20; i++){
		int n = rand() % 6 + 1;
		int limite = rand() % 300;
		printf(">>>>>>>>\n");
		printf("%d %d\n", n, limite);
		int v[n];
		int j = 0;
		while( j < n){
			int x = rand() % limite + 1;
			int errou = 0;
			for(int k = 0; k < j; k++){
				if(v[k] == x){
					errou = 1;
					break;
				} 
			}
			if(!errou){
				v[j++] = x;
			}
		}
		
		printf("%d", v[0]);
		for(int j = 1; j < n; j++){
			printf(" %d", v[j]);
		}
		printf("\n");
		
		printf("========\n");
		printf("%d\n", soma_multiplos(v, n, limite));
		printf("<<<<<<<<\n\n");	
			
	}
  
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
