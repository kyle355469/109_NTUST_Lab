#include <stdio.h>
#include <math.h>
int isprime(int, int);

int main(){
	int num;
	scanf("%d", &num);
	printf("%d", isprime(num, 2));
}

int isprime(int num, int ask){
	if(num % ask == 0 && num != ask){
		return 0;
	}
	if(ask > sqrt(num)){
		return 1;
	}
	if(num % ask != 0){
		return isprime(num, ask + 1);
	}
}
