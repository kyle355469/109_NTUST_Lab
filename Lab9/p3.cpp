#include <stdio.h>

void sort(int[][2] ,int);

int main(){
	int row;
	printf("Enter the number of value-pairs:");
	scanf("%d", &row);
	int arr[row][2];
	for(int i = 0; i < row; i++){
		printf("Input value-pair: ");
		scanf("%d%d", &arr[i][0], &arr[i][1]);
	}
	sort(arr, row);
}

void sort(int m[][2], int row){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < row - 1; j++){
			if(m[j][0] < m[j + 1][0]){
				int tmp = m[j][0];
				m[j][0] = m[j + 1][0];
				m[j + 1][0] = tmp;
				tmp = m[j][1];
				m[j][1] = m[j + 1][1];
				m[j + 1][1] = tmp;
			}else if(m[j][0] == m[j + 1][0] && m[j][1] < m[j + 1][1]){
				int tmp = m[j][1];
				m[j][1] = m[j + 1][1];
				m[j + 1][1] = tmp;
			}
		}
	}
	
	printf("The sorted result is\n{"); 
	for(int i = 0; i < row; i++){
		if(i != 0) printf(",");
		printf("{%d,%d}", m[i][0], m[i][1]);
	}
	printf("}");
}
