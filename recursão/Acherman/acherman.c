#include <stdio.h>

void pausa(){
	char c = getchar();
}


int A(int m, int n){
	//printf("A(%d,%d)\n", n , m);
	//pausa();
	if(m ==0) return n+1;
	else if(m > 0){ 
	 if( n == 0 )
		return A(m-1, 1);
	 else if(n > 0)
		return A(m-1, A(m, n-1) );	
	}
	return 0;	
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d", A(n,m) );
}
