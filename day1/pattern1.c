#include <stdio.h>

int main(){
//	printf("%-*.*so good", 20,10, "Vivek is sooo cute!");
	char str[100];
	int len;
	scanf("%s%n",str, &len);
	for (int i = 1; i<=len; i++)
		printf("%-*.*s%*.*s\n", len, i, str,len, i, str);		
	for (int i = len; i>=1; i--)
		printf("%-*.*s%*.*s\n", len, i, str,len, i, str);
	return 0;
}
Amar
A     A
 m   m
  a a
   r
  a a
 m   m
A     A

