#include <stdio.h>

int main(){
	int num;
	int tot;
	printf("Input:");
	scanf("%d", &num);
	while(num != 0){
		tot += num % 10;
		num /= 10; 
	}
	printf("The sum of the digits is %d.", tot);
} 
