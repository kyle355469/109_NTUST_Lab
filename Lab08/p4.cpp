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
		int type = rand() % 4;
		scanf("%d", &ask);
		while(ask != ans){
			type = rand() % 4;
			switch(type){
				case 0:
					printf("No, Please try again : ");
					break;
				case 1:
					printf("Wrong. Try once more : ");
					break;
				case 2:
					printf("Don't give up : ");
					break;
				case 3:
					printf("No. Keep trying : ");
					break;
			}
			scanf("%d", &ask);
		}
		switch(type){
			case 0:
				printf("Very good!\n");
				break;
			case 1:
				printf("Excellent\n");
				break;
			case 2:
				printf("Nice work!\n");
				break;
			case 3:
				printf("Keep up the good work!\n");
				break;
		}
	}while(true);
} 


int q(int *a, int *b){
	*a = rand() % 9 + 1;
	*b = rand() % 9 + 1;
}
