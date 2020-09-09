#include <stdio.h>
#include <stdlib.h>

int somaPrimos(int *v, int n);


int main(){
	int n,i;
	int *v;
	
	scanf("%d", &n);

	v = (int*) malloc (sizeof(int) * n );

	for(i=0;i<n;i++)
		scanf("%d", &v[i]);
	printf("%d\n", somaPrimos(v,n));
	free(v);
	return 0;
}

int ehPrimo(int n){
	int i,k=0;
	for(i=1;i<=n;i++)
		if(n%i == 0)
			k++;
	if(k==2)
		return 1;
	return 0;
}

int somaPrimos(int *v, int n){
	int i,s;
	for(i=0;i<n;i++){
		if(ehPrimo(v[i])){
			s++;
		}
	}
	return s;
}
