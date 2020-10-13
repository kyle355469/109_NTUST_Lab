#include <stdio.h>

int main(){
	int arr;
	for(int i = 0; i < 5; i++){
		scanf("%d", &arr);
		for(int j = 0; j < arr; j++){
			printf("%s", "*");
		}
		printf("\n");
	}
}
