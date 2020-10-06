#include <stdio.h>

int main(){
	int arr[3] = {};
	int a;
	for(int i = 0; i < 3; i++){
		scanf("%d", &a);
		if(a >= arr[0]){
			arr[2] = arr[1];
			arr[1] = arr[0];
			arr[0] = a;
		}else if(a >= arr[1]){
			arr[2] = arr[1];
			arr[1] = a;
		}else{
			arr[2] = a;
		}
	}
	if(arr[1] + arr[2] > arr[0]) printf("Yes");
	else printf("No");
} 
