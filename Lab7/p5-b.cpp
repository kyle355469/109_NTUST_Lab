#include <stdio.h>
#include <time.h>
#include <stdlib.h>
unsigned long long int fib(unsigned long long int);

int main(){
	int a;
	for(int i = 30; i < 100; i++){
		if(fib(i) > fib(i + 1)){
			printf("fib(%d) = %llu", i, fib(i));
			break;
		}
	}
} 
		

unsigned long long int fib(unsigned long long int a){
	unsigned long long int one = 0, two = 1, now = 0;
	for(int i = 1; i < a; i++){
		now = one + two;
		one = two;
		two = now;
		printf("%llu\n", now);
	}
	return now;
} 
