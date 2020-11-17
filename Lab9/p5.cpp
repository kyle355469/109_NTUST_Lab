#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int ball, slot;
	printf("Enter the number of balls to drop:");
	scanf("%d", &ball);
	printf("Enter the number of slots in the bean machine:");
	scanf("%d", &slot);
	int arr[slot] = {};
	
	for(int i = 0; i < ball; i++){
		int count = 0;
		for(int j = 0; j < slot - 1; j++){
			int a = rand() % 2;
			if(a == 1)
				printf("L");
			else{
				printf("R");
				count++;
			}
		}
		//printf("\n%d\n", count);
		arr[count] += 1;
		//printf("%d\n", arr[count]);
		printf("\n");
		
	}
	int max = 0;
	for(int i = 0;i < slot; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	/*for(int i = 0;i < slot; i++){
		printf("%d ", arr[i]);
	}
		printf("\n");*/
	for(int i = max;i > 0; i--){
		for(int j = 0; j < slot; j++){
			if(arr[j] != i){
				printf(" ");
			}else{
				printf("o");
				arr[j]--;
			}
		}
		printf("\n");
	}
}
