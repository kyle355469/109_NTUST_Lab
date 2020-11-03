#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int roll();
int play(int);

int main(){
	int money = 1000;
	int wager;
	while(true){
		do{
			printf("You have $%d now, please enter yout wager : ", money);
			scanf("%d", &wager);
		}while(wager > money);
		money += play(wager);
		if(money == 0){
			printf("Sorry. You busted!");
			break;
		}
	}
} 

int roll(){
	int a = rand() % 6 + 1;
	int b = rand() % 6 + 1;
	int sum = a + b;
	printf("Your dice is %d and %d\nYour sum is %d.\n", a, b, sum);
	return sum;
}

int play(int wager){
	srand(time(NULL));
	int point = roll();
	int check = 0; // 0 continue 1 win 2 lose
	int mypoint = 0;
	switch(point){
		case 7:
		case 11:
			printf("you win\n");
			return wager;
		case 2:
		case 3:
		case 12:
			printf("you lose\n");
			return wager * -1;
		default:
			mypoint = point;
			printf("Point is %d\n", mypoint);
			break;
	}
	while(!check){
		point = roll();
		if(point == mypoint){
			printf("you win\n");
			return wager;
		}else if(point == 7){
			printf("you lose\n");
			return wager * -1;
		}
	}
}
