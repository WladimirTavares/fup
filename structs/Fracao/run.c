#include <stdio.h>


typedef struct {
    int num,den;
}Fracao;

typedef enum { LT, EQ, GT} compare;


void mostraFracao(Fracao f1){
	printf("%d/%d\n", f1.num, f1.den);
}

compare comparaFracao(Fracao f1, Fracao f2);
Fracao somaFracao(Fracao f1, Fracao f2);
Fracao subtrFracao(Fracao f1, Fracao f2);
Fracao multFracao(Fracao f1, Fracao f2);
Fracao inversoFracao(Fracao f1);
Fracao divideFracao(Fracao f1, Fracao f2);
Fracao reduzFracao(Fracao f1);

int main(){
  int num1, den1, num2, den2;
  scanf("%d %d", &num1, &den1);
  scanf("%d %d", &num2, &den2);

  Fracao f1 = { num1, den1};
	Fracao f2 = { num2, den2};
	

  mostraFracao( reduzFracao( somaFracao(f1,f2) ) ); 
	mostraFracao( reduzFracao( subtrFracao(f1,f2) ) ); 
	mostraFracao( reduzFracao( multFracao(f1,f2) ) ); 
	mostraFracao( reduzFracao( divideFracao(f1,f2) ) ); 
	mostraFracao( reduzFracao( inversoFracao(f1) ) );
  mostraFracao( reduzFracao( inversoFracao(f2) ) );
  


}


/*
int main(){

	Fracao f1 = { 3, 5};
	Fracao f2 = { 5, 7};
	Fracao f3 = { 6, 10};
  if( comparaFracao(f1,f2) == LT) printf("YES");
	mostraFracao( somaFracao(f1,f2) ); //46/35
	mostraFracao( subtrFracao(f1,f2) ); //-4/35
	mostraFracao( multFracao(f1,f2) );//15/35
	mostraFracao( divideFracao(f1,f2) );//21/25
	mostraFracao( inversoFracao(f1) );//5/3
  mostraFracao( reduzFracao(f3) );//3/5
}
*/




compare comparaFracao(Fracao f1, Fracao f2){
	if( f1.num*f2.den < f2.num*f1.den ) return LT;
	else if( f1.num*f2.den > f2.num*f1.den ) return GT;
	else return EQ;
}

int gcd(int a, int b){
	while(b!=0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
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

