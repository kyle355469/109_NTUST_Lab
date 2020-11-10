#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int q(int*, int*);

int main(){
	srand(time(NULL));
	while(true){
		int a, b;
		int right = 0;
		int bad = 0;
		do{
			q(&a, &b);
			printf("How much is %d times %d? : ", a, b);
			int ans = a * b;
			int ask;
			scanf("%d", &ask);
			if(ans != ask){
				printf("No\n");
				bad++;
			}else{
				printf("Very good!\n");
				right++;
			}
		}while(right + bad < 10);
		if(right > 7){
			printf("Congratulations, you are ready to go to the next level!\n");
		}else{
			printf("Please ask your teacher for extra help.\n");
		}
		system("pause");
		system("cls");
	}
} 


int q(int *a, int *b){
	*a = rand() % 9 + 1;
	*b = rand() % 9 + 1;
}


