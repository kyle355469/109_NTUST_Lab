#include <stdio.h>

int main(){
	printf("Enter the exchange rate from USD to NTD:");
	float er;
	scanf("%f", &er);
	printf("Enter 0 to convert USD to NTD and 1 vice versa:");
	int mode;
	scanf("%d", &mode);
	if(mode == 1){
		printf("Enter the NTD amount:");
		float ntd;
		scanf("%f", &ntd);
		printf("$%.1f NTD is %.0f USD", ntd, ntd / er);
	}else if(mode == 0){
		printf("Enter the USD amount:");
		float usd;
		scanf("%f", &usd);
		printf("$%.1f USD is %.0f NTD", usd, usd * er);
	}
} 
