#include<stdio.h>
int isPrime(int n) {
	if(n<=1) {
		return 0;
	}
	for(int i=0;i*i<=n;i++) {
		if(n%i==0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(isPrime) {
		printf("it is a prime number");
		
	}
	else {
		printf("it is not a prime number");
	}
	return 0;
}
