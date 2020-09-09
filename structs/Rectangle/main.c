#include <stdio.h>

typedef struct  {
    int x, y;
} Ponto;

typedef struct {
   Ponto supEsq;
   Ponto infDir; 
} Retangulo;

int dentro(Retangulo r, Ponto p);


int main(){
	
	Retangulo r = {0,5,5,0};
	Ponto p1 = {2,2};
	printf("%d\n", dentro(r,p1) ); //1
	Ponto p2 = {2,7};
	printf("%d\n", dentro(r,p2) ); //0
	Ponto p3 = {-1,4};
	printf("%d\n", dentro(r,p3) ); //0
	Ponto p4 = {2,-1};
	printf("%d\n", dentro(r,p4) ); //0
	Ponto p5 = {5,5};
	printf("%d\n", dentro(r,p5) ); //1
	
	
	

}


int dentro(Retangulo r, Ponto p){
	
	Ponto supEsq = r.supEsq;
	Ponto infDir = r.infDir;

	if( p.x >= supEsq.x && p.x <= infDir.x && p.y >= infDir.y && p.y <= supEsq.y )
		return 1;
	else
		return 0;

}
