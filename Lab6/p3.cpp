#include <stdio.h>
#include <math.h>

int isEven(int num){
	if(num % 2){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	int a;
	while(scanf("%d", &a) && a != 0){
		printf("%d\n", isEven(a));
	}
} 
