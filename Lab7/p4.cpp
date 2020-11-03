#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int gcd(int , int);

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a > b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	printf("%d", a * b / gcd(a, b));
} 

int gcd(int a, int b){
	if(a % b == 0) return b;
	else return gcd(b, a % b);
}
