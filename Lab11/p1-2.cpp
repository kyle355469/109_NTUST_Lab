#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	char maze[12][12] = {};
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			maze[i][j] = '#';
		}
	}
	for(int i = 1; i < 11; i++){
		for(int j = 1; j < 11; j++){
			int a = rand() % 2;
			if(a){
				maze[i][j] = '#';
			}else{
				maze[i][j] = '.';
			}
		}
	}
	int ask = rand();
	int stx, sty;
	switch(ask % 4){
		case 0:
			maze[0][ask % 12] = '.';
			stx = ask % 12;
			sty = 0;
			break;
		case 1:
			maze[11][ask % 12] = '.';
			stx = ask % 12;
			sty = 11;
			break;
		case 2:
			maze[ask % 12][0] = '.';
			sty = ask % 12;
			stx = 0;
			break;
		case 3:
			maze[ask % 12][11] = '.';
			sty = ask % 12;
			stx = 11;
			break;		
	}
	ask = rand();
	int edx, edy;
	switch(ask % 4){
		case 0:
			maze[0][ask % 12] = '.';
			edx = ask % 12;
			edy = 0;
			break;
		case 1:
			maze[11][ask % 12] = '.';
			edx = ask % 12;
			edy = 11;
			break;
		case 2:
			maze[ask % 12][0] = '.';
			edy = ask % 12;
			edx = 0;
			break;
		case 3:
			maze[ask % 12][11] = '.';
			edy = ask % 12;
			edx = 11;
			break;		
	}
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			printf("%c", maze[i][j]);
		}
		printf("\n");
	}
	printf("start point : (%d, %d)\nend point : (%d , %d)", stx, sty, edx, edy);
}
