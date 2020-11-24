#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int count[6][6] = {};
	
	for(int i = 0; i < 36000; i++){
		int d1 = rand() % 6;
		int d2 = rand() % 6;
		count[d1][d2]++;
	}
	
	printf("\t");
	for(int i = 0; i < 6; i++){
		printf("%d\t", i + 1);
	}
	printf("\n");
	
	float actual[11] = {};
	float theorical[11] = {};
	
	for(int i = 0; i < 6; i++){
		printf("%d\t", i + 1);
		for(int j = 0; j < 6; j++){
			printf("%d\t", count[i][j]);
			actual[i + j] += count[i][j];
			theorical[i + j]++;
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i = 0; i < 11; i++){
		actual[i] = actual[i] / 36000.0 * 100;
		theorical[i] = theorical[i] / 36.0 * 100;
	}
	for(int i = 2; i <= 12; i++){
		printf("%d\'s theorical value is : %.2f AND actual value is : %.2f\n",
		 i, theorical[i - 2], actual[i - 2]);
	}
} 
