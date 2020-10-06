#include <stdio.h>

int main(){
	int a;
	int arr[4] = {};
	scanf("%d", &a);
	for(int i = 3; i >= 0; i--){
		arr[i] = a % 10 - 7;
		a /= 10;
		if(arr[i] < 0){
			arr[i] += 10;
		}
	}
	arr[0] += arr[2];
	arr[2] = arr[0] - arr[2];
	arr[0] = arr[0] - arr[2];
	arr[1] += arr[3];
	arr[3] = arr[1] - arr[3];
	arr[1] = arr[1] - arr[3];
	for(int i = 0; i < 4; i++){
		printf("%d", arr[i]);
	}	
} 
