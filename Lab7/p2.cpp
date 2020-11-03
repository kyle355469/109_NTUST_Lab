#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	char keep;
	do{
		srand(time(NULL));
		int ans = rand() % 1000;
		printf("%d", ans);
		printf("I have a number between 1 and 1000\n");
		printf("Can you guess my number?\n");
		printf("Please type your first guess.");
		int ask;
		int check = 1;
		do{
			scanf("%d", &ask);
			if(ask == ans){
				printf("1.	Excellent! You guessed the number.\nWould you like to play again (y or n)? : ");
				scanf("%c", &keep);
				scanf("%c", &keep);
				check = 0;
			}else if(ask < ans){
				printf("2.	Too low! Try again.\n");
			}else{
				printf("3.	Too high! Try again.\n");
			}
		}while(check);
	}while(keep == 'y');
		
} 
