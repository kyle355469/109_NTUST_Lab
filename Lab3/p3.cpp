#include <stdio.h>
#include <math.h>
int main(){
	int num;
	scanf("%d", &num);
	bool check = 1;
	for(int i = 2; i < sqrt(num); i++){
		if(num % i == 0){
			check = false;
			break;
		}
	}
	if(check){
		printf("It is a prime");
	}else{
		printf("it is not a prime");
	}
} 
