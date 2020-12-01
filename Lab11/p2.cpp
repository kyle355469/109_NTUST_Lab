#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void swap(int*, int*);

int main(){
	srand(time(NULL));
	int arr[4][13] = {};
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			arr[i][j] = i * 13 + j + 1;
		}
	}
	int keep;
	do{
		system("cls");
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 13; j++){
				int a = rand();
				swap(&arr[i][j], &arr[a % 4][a % 13]);
			}
		}
		for(int j = 0; j < 13; j++){
			printf("\t%d",j);
		}
		printf("\n");
		for(int i = 0; i < 4; i++){
			printf("%d\t", i);
			for(int j = 0; j < 13; j++){
				printf("%d\t",arr[i][j]);
			}
			printf("\n");
		}
		printf("again?(1/0)");
		scanf("%d", &keep);
	}while(keep);
		
	
}

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
