#include <stdio.h>
#include <assert.h>
char zeroUm(int a, int b, int c);

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%c\n", zeroUm(a,b,c) );
}

char zeroUm(int a, int b, int c){
	if( a != b && a != c) return 'A';
	else if( b != a && b != c) return 'B';
	else if( c != a && c != b) return 'C';
	else return '*';
}
