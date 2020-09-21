#include <stdio.h>

int myPow(int A, int B){
	int i,s=1;
	
	for(i=0;i<B;i++){
		s *= A; 
	}
	return s;
}

int main(){
	int A,B;
	
	
	scanf("%d %d", &A, &B);

	printf("%d\n", myPow(A,B));

	return 0;
}
