#include <stdio.h>
#include <assert.h>


long long numero_graos(int n);

int main(){
	int n;
  scanf("%d", &n);
  printf("%lld\n", numero_graos(n) );
}

/*
int main(){
	assert( numero_graos(1) == 1LL );
	assert( numero_graos(2) == 3LL );
	assert( numero_graos(3) == 7LL );
	assert( numero_graos(4) == 15LL );
	assert( numero_graos(63) == 9223372036854775807LL );
}
*/

long long numero_graos(int n){
	long long soma = 0LL;
	long long square = 1;
	
	for(int i = 1; i <= n; i++){
		soma += square;
		square *= 2;
	}
	
	return soma;
}


