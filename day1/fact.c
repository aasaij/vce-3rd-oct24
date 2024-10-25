//The President and Prime Minister problem solution
#include <stdio.h>
#define MAX 100
int findFact(int x, int f[], int size){
	int carry = 0;
	for (int i = 0; i<size; i++){
		int res = f[i] * x + carry;
		f[i] = res % 10;
		carry = res / 10;
	}
	while(carry){
		f[size] = carry % 10;
		carry = carry / 10;
		size++;
	}
	return size;
}

void factorial(int n){
	int fact[MAX], arrSize=1;
	fact[0] = 1;
	for (int x = 2; x<n; x++)
		arrSize = findFact(x, fact, arrSize);
	
	for (int x = arrSize-1;x>=0; x--)
		printf("%d", fact[x]);	
}

int main(){
	int x;
	long double p = 1;
	scanf("%d", &x);
	factorial(x);
	return 0;	
}

//
//	Attendance Link : https//bit.ly/HA-241024
//	Trainer : Tambi
//	Session : AN
//	
//	Assessment : student.ccc.training 
//	Practice : student.ccc.training
	
	
	