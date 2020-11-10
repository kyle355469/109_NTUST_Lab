#include <stdio.h>

long c(long, long);

int main(){
	long n, p;
	scanf("%d%d", &n, &p);
	printf("%d", c(n, p));
} 

long c(long n, long p){
	if(p == 0 || n == p){
		return 1;
	}
	return c(n - 1, p) + c(n - 1, p - 1);
}
