#include <stdio.h>

int main(){
	int arr1[5];
	int arr2[5];
	for(int i = 0; i < 5; i++){
		scanf("%d", &arr1[i]);
	}
	for(int i = 0; i < 5; i++){
		scanf("%d", &arr2[i]);
	}
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(arr1[i] == arr2[j]){
				printf("%d", arr1[i]);
				break;
			}
		}
	}
}
