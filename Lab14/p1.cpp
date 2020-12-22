#include <stdio.h>

void reverseBits(unsigned );

int main(){
	int num;
	scanf("%d", &num);
	reverseBits(num);
} 

void reverseBits(unsigned ten){
	int arr[32] = {};
	int i = 31;
	for(i; i >= 0; i--){
		arr[i] = ten % 2;
		ten /= 2;
		if(!ten) break;
	}
	for(int j = 0; j < 32; j++){
		printf("%d", arr[j]);
	}
	printf("\n");
	for(int j = 31; j >= 0; j--){
		printf("%d", arr[j]);
	}
}
