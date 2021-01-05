#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	char again;
	srand(time(NULL));
	int i, j;
	do{
		int ans;
		int check = 1;
		int arr[4];
		while(check){
			check = 0;
			ans = rand() % 10000;
			if(ans < 1000){
				check = 1;
			}else{
				int used = ans;
				for(i = 0; i < 4; i++){
					arr[i] = used % 10;
					used /= 10;
				}
				for(i = 0; i < 4; i++){
					for(j = i + 1; j < 4; j++){
						if(arr[i] == arr[j]){
							check = 1;
							break;
						}
					}
					if(check){
						break;
					}
				}
			}
		}
		printf("ans is %d\n", ans);
		while(1){
			printf("Guess the number in four-digits :");
			int guess;
			scanf("%d", &guess);
			int guess_arr[4];
			for(i = 0; i < 4; i++){
				guess_arr[i] = guess % 10;
				guess /= 10;
			}
			int ans_type = 0; // 1 = cannot be duplicated 2 = nanb 3 = excellent
			for(i = 0; i < 3; i++){
				for(j = i + 1; j < 4; j++){
					if(guess_arr[i] == guess_arr[j]){
						ans_type = 1;
						break;
					}
				}
				if(ans_type) break;
			}
			int a = 0, b = 0;
			for(i = 0; i < 4; i++){
				for(j = 0; j < 4; j++){
					if(arr[i] == guess_arr[j]){
						if(i == j){
							a++;
						}else {
							b++;
						}
					}
				}
			}
			if(!ans_type && a == 4){
				ans_type = 3;
			}else if(!ans_type && a < 4){
				ans_type = 2;
			}
			
			if(ans_type == 1){
				printf("Cannot be duplicated!\n");
			}else if(ans_type == 2){
				printf("%dA%dB\n", a, b);
			}else if(ans_type == 3){
				printf("Excellent!\n");
				break;
			}
		}
		printf("Would you like to play again ( y or n ) ?");
		scanf("%c", &again);
		scanf("%c", &again);
	}while(again == 'y' || again == 'Y');
	printf("Gameover.\n");
}
