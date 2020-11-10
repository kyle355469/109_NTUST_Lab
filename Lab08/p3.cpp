#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int q(int*, int*);

int main(){
	srand(time(NULL));
	int a, b;
	do{
		q(&a, &b);
		printf("How much is %d times %d? : ", a, b);
		int ans = a * b;
		int ask;
		scanf("%d", &ask);
		while(ask != ans){
			printf("No, Please try again : ");
			scanf("%d", &ask);
		}
		printf("Very good!\n");
	}while(true);
} 


int q(int *a, int *b){
	*a = rand() % 9 + 1;
	*b = rand() % 9 + 1;
}
