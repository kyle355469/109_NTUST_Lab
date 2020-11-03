#include <stdio.h>
#include <time.h>
#include <stdlib.h>
unsigned long long int fib(unsigned int);

int main(){
	int a;
	while(1){
		scanf("%d",&a);
		printf("%u\n", fib(a));
	}
} 
		

unsigned long long int fib(unsigned int a){
	if(a == 1) return 1;
	int one = 0, two = 1, now;
	for(int i = 1; i < a; i++){
		now = one + two;
		one = two;
		two = now;
		//printf("%d\n", now);
	}
	return now;
} 
