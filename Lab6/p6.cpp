#include <stdio.h>
#include <math.h>

int nm(double x, double y){
	double xy = (double)x / y;
	double avg = (y + xy) / 2.0;
	//printf("%f %f %f %f\n", x, y, xy, avg);
	if(fabs(y - avg) <= 0.00001){
		printf("square root : %f", avg);
	}else{
		nm(x, avg);
	}
	
}

int main(){
	double ask;
	printf("Enter a positive number : ");
	scanf("%lf", &ask);
	nm(ask, 1.0);
} 
