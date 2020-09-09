#include <stdio.h>
#include <assert.h>

long long numero_graos(int n);

int main(){
	int n;
  scanf("%d", &n);
  printf("%lld\n", numeros_graos(n));
}

long long numero_graos(int n){
	long long soma = 0LL;
	long long square = 1;
	
	for(int i = 1; i <= n; i++){
		soma += square;
		square *= 2;
	}
	
	return soma;
}


