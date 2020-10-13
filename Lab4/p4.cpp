#include <stdio.h>
#include <math.h>
int main(){
	double pi = 0;
	for(int i = 1; i <= 100000; i++){
		pi += (4 * pow(-1, (i % 2) + 1) / (2 * i - 1));
		if(i % 10000 == 0){
			printf("%f\n", pi);
		}
	}
}
