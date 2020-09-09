#include <stdio.h>


typedef struct {
    int num,den;
}Fracao;

typedef enum { LT, EQ, GT} compare;

compare comparaFracao(Fracao f1, Fracao f2){
	if( f1.num*f2.den < f2.num*f1.den ) return LT;
	else if( f1.num*f2.den > f2.num*f1.den ) return GT;
	else return EQ;
}


int gcd(int a, int b){
	if( a < 0 ) a = -a;
	if( b < 0 ) b = -b;
	
	
	while(b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	
	return a;
}

void mostraFracao(Fracao f1){
	printf("%d/%d\n", f1.num, f1.den);
}


Fracao reduzFracao(Fracao f1){
	int d = gcd(f1.num, f1.den);
	Fracao res = { f1.num/d , f1.den/d  };
	return res;
}



Fracao somaFracao(Fracao f1, Fracao f2){
	Fracao res = { f1.num*f2.den + f2.num*f1.den , f1.den*f2.den  };
	return reduzFracao(res);
}

Fracao subtrFracao(Fracao f1, Fracao f2){
	Fracao res = { (f1.num*f2.den - f2.num*f1.den) , f1.den*f2.den  };
	return reduzFracao(res);
}

Fracao multFracao(Fracao f1, Fracao f2){
	Fracao res = { f1.num*f2.num , f1.den*f2.den  };
	return reduzFracao(res);
}

Fracao inversoFracao(Fracao f1){
	Fracao res = { f1.den , f1.num  };
	return reduzFracao(res);
}

Fracao divideFracao(Fracao f1, Fracao f2){
	return reduzFracao ( multFracao(f1, inversoFracao(f2) ) ) ;
}



int main(){

	Fracao f1 = { 3, 5};
	Fracao f2 = { 5, 7};
	
	mostraFracao(f1);
	mostraFracao(f2);
	printf( "%d\n", comparaFracao(f1, f2) ); //LT
	mostraFracao( somaFracao(f1,f2) ); //46/35
	mostraFracao( subtrFracao(f1,f2) );
	mostraFracao( multFracao(f1,f2) );
	mostraFracao( divideFracao(f1,f2) );
	 
	
	
	


}
