#include <stdio.h>


int main(){
	int n;
	scanf("%d", &n);
	
	int A[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &A[i]);
		
	int count = 0;
	int swapped = 1;
	
	while(swapped){
		swapped = 0;
		count++;
		for(int i = 0; i < n-1; i++){
			if( A[i] > A[i+1]){
				int temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
				swapped = 1;
			}
		}
	}
	
	printf("%d\n", count);
	

}
