#include <stdio.h>

int main() {
	int input;
	scanf("%d", &input);
	for(int i = input; i > 0; i--){
		for(int j = i; j > 0; j--){
			printf("%d", j);
		}
		for(int j = 2; j <= i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
}
