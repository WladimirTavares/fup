#include <stdio.h>
#include <stdlib.h>

int contaChar (char c, char* str){
	int i=0, k=0;
	while(str[i]!= '\0'){
		if(str[i]== c)
			k++;
		i++;
	}
	return k;
}

int main(){
	char c;
	char v[100];

	scanf("%c", &c);

	scanf(" %[^\n]", v);

	
	printf("%d\n", contaChar(c,v));

	return 0;
}
