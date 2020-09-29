#include <stdio.h>

int main(){
	float w, h;
	scanf("%f%f", &w, &h);
	h /= 100;
	float bmi = w / h / h;
	if(bmi < 18.5) printf("Underwight");
	else if(bmi < 25) printf("Normal");
	else if(bmi < 30) printf("Overweight");
	else printf("obese");
} 
