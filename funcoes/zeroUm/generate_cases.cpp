#include <stdio.h>
#include <assert.h>
char zeroUm(int a, int b, int c);

int main(){
	
	for(int v = 0; v < 8; v++){
		int a = (v>>2)&1;
		int b = (v>>1)&1;
		int c = (v>>0)&1;
		printf(">>>>>>>>\n");
		printf("%d %d %d\n",  a, b , c );
		printf("========\n");
		printf("%c\n", zeroUm(a, b, c) );
		printf("<<<<<<<<\n\n");	
		
	}
	
	
		
}

char zeroUm(int a, int b, int c){
	if( a != b && a != c) return 'A';
	else if( b != a && b != c) return 'B';
	else if( c != a && c != b) return 'C';
	else return '*';
}
