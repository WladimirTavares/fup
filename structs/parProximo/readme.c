#include <stdio.h>
#include <math.h>

typedef struct {
	float x,y;
} Ponto;


Ponto proximo(Ponto vetor[], int n, Ponto p);


int main(){
	
	Ponto p = {2,4};
	Ponto vet[] = { {3,6}, {1,6}, {5,7}, {3,9}, {4,9} };
	Ponto q = proximo(vet, 5, p);
	printf("%.2f %.2f\n", q.x, q.y); //3.00 6.00 
}

float distance(Ponto p, Ponto q){
	float dx = p.x - q.x;
	float dy = p.y - q.y;
	return sqrt(dx*dx + dy*dy);
}

Ponto proximo(Ponto vetor[], int n, Ponto p){
	
	Ponto q 			= vetor[0];
	float mindist = distance(p, vetor[0]); 
	
	for(int i = 1; i < n; i++){
		float dist = distance(vetor[i],p);
		if( dist < mindist ){
			mindist = dist;
			q = vetor[i];
		}
	}
	
	return q;

}

