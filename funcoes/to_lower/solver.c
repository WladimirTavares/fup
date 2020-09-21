#include <stdio.h>
#include <stdlib.h>

void minusculo(char* str);


int main(){
	char v[100];
	
	scanf(" %[^\n]", v);

	minusculo(v);
	printf("%s\n", v);

	return 0;
}


void minusculo(char* str){
	int i=0;
	while(str[i]!= '\0'){
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i]+=32;
		i++;
	}
}

