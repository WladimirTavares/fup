#include <stdio.h>
#include <assert.h>

int collatz(int n);

int main(){
	int n;
	while( scanf("%d", &n) && n > 0){
		printf(">>>>>>>>\n");
		printf("%d\n", n);
		printf("========\n");
		printf("%d\n", collatz(n));
		printf("<<<<<<<<\n\n");

	}
	
}

int collatz(int n){
	int cont = 0;
	while(n!=1){
		if(n%2==0) n = n/2;
		else n = 3*n+1;
		cont++;
	}
	return cont;
}


