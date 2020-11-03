#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int power(int , int);

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", power(a, b));
} 

int power(int a, int b){
	if(b == 1) return a;
	else return a * power(a, b - 1);
}
