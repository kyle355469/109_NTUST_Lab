#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	srand(time(NULL));
	int count[2] = {};
	for(int i = 0; i < 1000; i++){
		int now = rand() % 2;
		count[now]++;
	}
	printf("heads:%d\ntail:%d", count[0], count[1]);
} 
