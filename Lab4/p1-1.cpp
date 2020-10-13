#include <stdio.h>

int main(){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j <= i; j++){
			printf("%s", "*");
		}
		printf("\n");
	}
	for(int i = 9; i >= 0; i--){
		for(int j = 0; j <= i; j++){
			printf("%s", "*");
		}
		printf("\n");
	}
	for(int i = 9; i >= 0; i--){
		for(int j = 9 - i; j > 0; j--){
			printf(" ");
		}
		for(int j = 0; j <= i; j++){
			printf("%s", "*");
		}
		printf("\n");
	}
	for(int i = 0; i < 10; i++){
		for(int j = 9 - i; j > 0; j--){
			printf(" ");
		}
		for(int j = 0; j <= i; j++){
			printf("%s", "*");
		}
		printf("\n");
	} 
} 
