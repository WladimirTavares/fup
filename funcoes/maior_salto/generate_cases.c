#include <stdio.h>
#include <stdlib.h>


int maior_salto(int v[], int n);

int main(){
	
	int T = 10;
	while(T--){
		int n = rand() % 20 + 2; 
		int v[n];
		for(int i = 0; i < n; i++){
			v[i] = rand() % 20 - 10;
		}
		
		printf(">>>>>>>>\n");
		printf("%d\n", n);
		
		printf("%d",v[0]);
		for(int i = 1; i < n; i++)
			printf(" %d", v[i]);
		printf("\n");
		
		printf("========\n");
		printf("%d\n", maior_salto(v,n) );
		printf("<<<<<<<<\n\n");	
	}
}

int maior_salto(int v[], int n){
	int max_salto = abs(v[1]-v[0]);
	for(int i = 0; i < n-1; i++){
		int salto = abs(v[i+1]-v[i]);
		max_salto = salto > max_salto ? salto : max_salto;
	}
	return max_salto;

}
