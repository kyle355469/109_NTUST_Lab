#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int matrix[5][5];
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			matrix[i][j] = rand() % 2;
		}
	}
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	int row[5] = {};
	int rowmax[2] = {};
	int col[5] = {};
	int colmax[2] = {};
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(matrix[i][j] == 1){
				col[i]++;
				if(col[i] > colmax[1]){
					colmax[0] = i;
					colmax[1] = col[i];
				}
			}
			if(matrix[j][i] == 1){
				row[i]++;
				if(row[i] > rowmax[1]){
					rowmax[0] = i;
					rowmax[1] = row[i];
				}
			}
		}
	}
	printf("%d %d\n", rowmax[0] + 1, colmax[0] + 1);
	
}
