#include <stdio.h>

int main(){
	int r1, c1, r2, c2;
	scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
	int matrix1[r1][c1];
	int matrix2[r2][c2];
	for(int i = 0; i < r1; i++){
		for(int j = 0; j < c1; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}
	for(int i = 0; i < r2; i++){
		for(int j = 0; j < c2; j++){
			scanf("%d", &matrix2[i][j]);
		}
	}
	int matrixAns[r1][c2] = {};
	for(int i = 0; i < r1; i++){
		for(int j = 0; j < c2; j++){
			for(int k = 0; k < c1; k++){
				matrixAns[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	for(int i = 0; i < r1; i++){
		for(int j = 0; j < c2; j++){
			printf("%d ", matrixAns[i][j]);
		}
		printf("\n");
	}
}
