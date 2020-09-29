#include <stdio.h>
#include <math.h>
int main(){
	float x1, y1, r1, x2, y2, r2;
	printf("Enter circle1's center x-, y-coordinates, and radius:");
	scanf("%f%f%f", &x1, &y1, &r1);
	printf("Enter circle2's center x-, y-coordinates, and radius:");
	scanf("%f%f%f", &x2, &y2, &r2);
	float dis = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	if(dis <= r1 - r2){
		printf("Circle2 is inside circle1.");
	}else if(dis <= r1 + r2){
		printf("Circle2 is overlap circle1");
	}else{
		printf("Circle2 does not overlap circle1");
	}
} 
