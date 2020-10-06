#include <stdio.h>

int main(){
	float sales = 0;
	printf("Enter sales in dollars (-1 to end):");
	scanf("%f", &sales);
	while(sales != -1){
		float ans = 200 + sales * 0.09;
		printf("Salary is: %.2f\n", ans);
		printf("Enter sales in dollars (-1 to end):");
		scanf("%f", &sales);
	}
} 
