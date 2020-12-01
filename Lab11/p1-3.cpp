#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char maze[12][12] = {}; 
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
void MazeTraverse(int , int, int);
int DirectionCheck(int , int);
void MazeGenerator(int*, int*);
int main(){
	int stx, sty;
	MazeGenerator(&stx, &sty);
	//direction¡G1 = up, 2 = right, 3 = down, 4 = left; 
	int dir = DirectionCheck(stx, sty);
	MazeTraverse(stx, sty, dir);
} 

void MazeTraverse(int nx, int ny, int direction){
	maze[ny][nx] = 'X';
	
	do{
		if(maze[ny + dy[(direction + 1) % 4]][nx + dx[(direction + 1) % 4]] != '#'){
			direction = (direction + 1) % 4;
		}else if(maze[ny + dy[direction]][nx + dx[direction]] != '#'){
			direction = direction;
		}else if(maze[ny + dy[(direction + 3) % 4]][nx + dx[(direction + 3) % 4]] != '#'){
			direction = (direction + 3) % 4;
		}else if(maze[ny + dy[(direction + 2) % 4]][nx + dx[(direction + 2) % 4]] != '#'){
			direction = (direction + 2) % 4;
		}
		ny += dy[direction];
		nx += dx[direction];
		maze[ny][nx] = 'X';
		printf("%d %d\n", nx, ny); 
		for(int i = 0; i < 12; i++){
			for(int j = 0; j < 12; j++){
				printf("%c", maze[i][j]);
			}
			printf("\n");
		}
		if((ny == 0 || ny == 11 || nx == 0 || nx == 11)){
			printf("%d, %d", nx, ny);
			break;
		}
	}while(true);
}
void MazeGenerator(int* stx, int* sty){
	srand(time(NULL));
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
	switch(ask % 4){
		case 0:
			maze[0][ask % 12] = '.';
			*stx = ask % 12;
			*sty = 0;
			break;
		case 1:
			maze[11][ask % 12] = '.';
			*stx = ask % 12;
			*sty = 11;
			break;
		case 2:
			maze[ask % 12][0] = '.';
			*sty = ask % 12;
			*stx = 0;
			break;
		case 3:
			maze[ask % 12][11] = '.';
			*sty = ask % 12;
			*stx = 11;
			break;		
	}
	ask = rand();
	switch(ask % 4){
		case 0:
			maze[0][ask % 12] = '.';
			break;
		case 1:
			maze[11][ask % 12] = '.';
			break;
		case 2:
			maze[ask % 12][0] = '.';
			break;
		case 3:
			maze[ask % 12][11] = '.';
			break;		
	}
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			printf("%c", maze[i][j]);
		}
		printf("\n");
	}
	printf("start point : (%d, %d)\n", *stx, *sty);
}
int DirectionCheck(int x, int y){
	for(int i = 0; i < 4; i++){
		int newx = x + dx[i];
		int newy = y + dy[i];
		if(newx >= 0 && newx < 12 && newy >= 0 && newy < 12){
			if(maze[newy][newx] == '.'){
				return i;
			}
		}
	}
}
