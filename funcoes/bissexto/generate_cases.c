#include <stdio.h>
#include <assert.h>
int bissexto(int ano);

int main(){
	int n;
	while( scanf("%d", &n) && n > 0){
		printf(">>>>>>>>\n");
		printf("%d\n", n);
		printf("========\n");
		printf("%d\n", bissexto(n));
		printf("<<<<<<<<\n\n");

	}
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

