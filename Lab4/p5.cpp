#include <stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	int arr[10];
	int now = 0;
	while(num != 0){
		arr[now] = num % 10;
		num /= 10;
		now++;
	}
	for(int i = 10; i >= 0 ; i--){
		for(int j = 0; j < i; j++){
			if(arr[j] > arr[i]){
				arr[j] += arr[i];
				arr[i] = arr[j] - arr[i];
				arr[j] -= arr[i];
			}
		}
	}
	for(int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
}
