#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int judge(int); // 1forX 2forO
int playx();
int playy(); 
int point;

char gameboard[7][8] = {{"-------"},
						{"| | | |"},
						{"-------"},
						{"| | | |"},
						{"-------"},
						{"| | | |"},
						{"-------"}};
						
int main(){
	point = 0;
	int result = playx();
	if(result == 1) printf("X Win");
	else if(result == 2) printf("O Win");
	else if(result == 3) printf("No One Win");
} 
int playx(){
	int xx, xy;
	printf("Enter a row (0, 1, or 2) for player X:");
	scanf("%d", &xy);
	printf("Enter a column (0, 1, or 2) for player X:");
	scanf("%d", &xx);
	gameboard[2 * xy + 1][2 * xx + 1] = 'X';
	point++;
	system("cls");
	for(int i = 0; i < 7; i++){
		printf("%s\n", gameboard[i]);
	}
	return judge(1);
}

int playy(){
	int ox, oy;
	printf("Enter a row (0, 1, or 2) for player O:");
	scanf("%d", &oy);
	printf("Enter a column (0, 1, or 2) for player O:");
	scanf("%d", &ox);
	gameboard[2 * oy + 1][2 * ox + 1] = 'O';
	point++;
	system("cls");
	for(int i = 0; i < 7; i++){
		printf("%s\n", gameboard[i]);
	}
	return judge(2);
}

int judge(int nowplay){
	for(int i = 1; i < 7; i += 2){
		if(gameboard[i][1] == gameboard[i][3] && gameboard[i][1] == gameboard[i][5] && gameboard[i][1] != ' '){
			return nowplay;
		}
		if(gameboard[1][i] == gameboard[3][i] && gameboard[1][i] == gameboard[5][i] && gameboard[i][1] != ' '){
			return nowplay;
		}
	}
	if(gameboard[1][1] == gameboard[3][3] && gameboard[1][1] == gameboard[5][5] && gameboard[3][3] != ' '){
		return nowplay;
	}
	if(gameboard[1][5] == gameboard[3][3] && gameboard[3][3] == gameboard[5][1] && gameboard[3][3] != ' '){
		return nowplay;
	}if(point == 9){
		return 3;
	}else if(nowplay == 1){
		return playy();
	}else if(nowplay == 2){
		return playx();
	}
}
