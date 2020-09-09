#include <stdio.h>
#include <assert.h>

int collatz(int n);

int main(){
	assert( collatz(12) == 9 );
	
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


