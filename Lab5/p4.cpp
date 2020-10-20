#include <stdio.h>
#include <math.h> 
int main() {
	double ans = 0;
	for(int i = 1; i < 1000; i++){
		ans += (1 / (sqrt(i) + sqrt(i + 1))); 
	}
	printf("%f", ans);
}
