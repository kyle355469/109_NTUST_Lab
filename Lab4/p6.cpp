#include <stdio.h>
#include <math.h>
int main(){
	for(int i = 1; i < 500; i++){
		for(int j = 1; j < 500; j++){
			int third = sqrt(i * i + j * j);
			if(hypot(i, j) <= 500 && hypot(i, j) - (int)hypot(i, j) == 0){
				printf("%d %d\n", i, j);
			}
		}
	}
}
