#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int hanoi(int, int, int, int);

int main(){
	int floor;
	scanf("%d", &floor);
	hanoi(floor, 1, 2, 3);
} 

int hanoi(int layer, int sor, int aux, int des){
	if(layer == 1){
		printf("%d -> %d\n", sor, des);
		return 0;
	}
	hanoi(layer - 1, sor, des, aux);
	printf("%d -> %d\n", sor, des);
	hanoi(layer - 1, aux, sor, des);
}
