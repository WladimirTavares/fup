#include <stdio.h>
#include <assert.h>
int bissexto(int ano);

int main(){
	assert( bissexto(1997) == 0);
	assert( bissexto(1996) == 1);
	assert( bissexto(1900) == 0);
	assert( bissexto(2000) == 1);
}

int bissexto(int ano){
	if(ano%400==0)
		return 1;
	else if(ano%100==0)
		return 0;
	else if(ano%4==0)
		return 1;
	else 
		return 0;
}

