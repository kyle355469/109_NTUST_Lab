#include <stdio.h>
#include <math.h>

void isPerfect(int num){
	int ans = 0;
	int arr[num] = {};
	int i = 1;
	int max = 0;
	for(i; i < num; i++){
		if(num % i == 0){
			ans += i;
			arr[i] = 1;
			max = i;
		} 
		
	}
	if(ans == num){
		printf("%d = ", num);
		for(int j = 1; j < num; j++){
			if(arr[j] == 1 && j != max){
				printf("%d+", j);
			}else if(arr[j] == 1 && j == max){
				printf("%d", j);
			}
		}
		printf("\n");
	}
}

int main(){
	for(int i = 1; i <= 1000; i++){
		isPerfect(i);
	}
} 
