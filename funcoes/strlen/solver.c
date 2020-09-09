#include <stdio.h>
#include <string.h>

int myStrlen(char* str){
	int i=0;
	while(str[i++]!= '\0');
	return i-1;
}

int main(){
	char v[100];

	scanf(" %[^\n]", v);

	printf("%d\n", myStrlen(v));

	return 0;
}
