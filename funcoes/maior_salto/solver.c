#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int maior_salto(int v[], int n);

int main(){
  int n;
	scanf("%d", &n); 
  int v[n];
  for(int i = 0; i < n; i++)
    scanf("%d", &v[i]);

  printf("%d\n", maior_salto(v, n));
}

int maior_salto(int v[], int n){
	int max_salto = abs(v[1]-v[0]);
	for(int i = 0; i < n-1; i++){
		int salto = abs(v[i+1]-v[i]);
		max_salto = salto > max_salto ? salto : max_salto;
	}
	return max_salto;

}

