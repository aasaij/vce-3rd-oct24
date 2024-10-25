#include <stdio.h>
char* getChar(){
	char *element = (char*)malloc(sizeof(char));
	scanf("%c", element);
	return element;
}
int main(){
	printf("%c", *getChar());
	return 0;
}