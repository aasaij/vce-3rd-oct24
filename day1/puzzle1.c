#include <stdio.h>

int main(){
//	printf("%d", 0b10100);
//	printf("%g", 10/4.0);
//	printf("%u", -1);
	if (sizeof(char)>-1)
		printf("True");
	else
		printf("False");
	return 0;
}