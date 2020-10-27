#include <stdio.h>
#include <math.h>

void reverse(int number){
	int arr[25] = {};
	int now = 0;
	while(number != 0){
		arr[now] = number % 10;
		number /= 10;
		now++;
	}
	for(int i = 0; i < now; i++){
		printf("%d", arr[i]);
	}
}

int main(){
	long long int num;
	scanf("%d", &num);
	reverse(num);
} 
