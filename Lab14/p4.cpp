#include <stdio.h>

int main(){
	int num[12];
	int odd = 0;
	int even = 0;
	for(int i = 0; i < 12; i++){
		scanf("%d", &num[i]);
		if(i % 2 == 0){
			odd += num[i];
		}else if(i % 2 == 1 && i != 11){
			even += num[i];
		}
	}
	odd *= 3;
	odd += even;
	//printf("%d\n", odd);
	int checkdigit = 0;
	if(odd % 10 == 0){
		checkdigit = 0;
	}else{
		checkdigit = 10 - (odd % 10);
	}
	//printf("%d\n", checkdigit);
	//printf("%d\n", num[11]);
	if(checkdigit == num[11]){
		printf("validated.\n");
	}else{
		printf("error in barcode.\n");
	}
} 
/* 0 2 0 3 5 7 1 2 2 6 8 2 */

//0 0 5 1 2 8 = 16 * 3 = 48 + 20 = 68
//2 3 7 2 6  = 20
