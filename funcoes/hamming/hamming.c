#include <stdio.h>
#include <string.h>

int hamming(char S[], char T[], int n);

int main(){
	char S[1024];
	char T[1024];
		
	scanf("%s", S);
	scanf("%s", T);
	printf("%d", hamming(S, T, strlen(S)));
	
		
}

int hamming(char S[], char T[], int n){
	int dist = 0;
	for(int i = 0; i < n; i++){
		dist += (S[i] != T[i] ? 1 : 0);
	}
	return dist;
}
