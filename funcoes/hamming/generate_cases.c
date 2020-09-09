#include <stdio.h>
#include <stdlib.h> 


int hamming(char S[], char T[], int n);

char bases[] = "ACGT";

int main(){
	
	for(int k = 1; k <= 20; k++){
	
		int N = rand() % 20 + 1;
		
		char S[N+1];
		char T[N+1];
		
		for(int i = 0; i < N; i++){
			S[i] = bases[ rand()%4]; 
			T[i] = bases[ rand()%4];
		}
		S[N] = '\0';
		T[N] = '\0';
		
		printf(">>>>>>>>\n");
		printf("%s\n", S);
		printf("%s\n", T);
		printf("========\n");
		printf("%d\n", hamming(S, T, N) );
		printf("<<<<<<<<\n\n");	
				
	}
		
	
	
	
}

int hamming(char S[], char T[], int n){
	int dist = 0;
	for(int i = 0; i < n; i++){
		dist += (S[i] != T[i] ? 1 : 0);
	}
	return dist;
}
