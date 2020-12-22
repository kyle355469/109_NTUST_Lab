#include <stdio.h>

void packCharacters(char, char);

int main(){
	char word1, word2;
	scanf("%c %c", &word1, &word2);
	packCharacters(word1, word2);
} 

void packCharacters(char w1, char w2){
	unsigned a = w1;
	printf("%u ", a);
	unsigned b = w2;
	printf("%u\n", b);
	int arr1[32] = {};
	for(int i = 31; i >= 24; i--){
		arr1[i] = a % 2;
		a /= 2;
	}
	for(int j = 0; j < 32; j++){
		if(j % 8 == 0 && j != 0) printf(" ");
		printf("%d", arr1[j]);
	}
	printf("\n");
	int arr2[32] = {};
	for(int i = 31; i >= 24; i--){
		arr2[i] = b % 2;
		b /= 2;
	}
	for(int j = 0; j < 32; j++){
		if(j % 8 == 0 && j != 0) printf(" ");
		printf("%d", arr2[j]);
	}
	printf("\n\n");
	int ans[32] = {};
	for(int i = 16; i < 24; i++){
		ans[i] = arr1[i + 8];
	}
	for(int i = 24; i < 32; i++){
		ans[i] = arr2[i];
	}
	for(int i = 0; i < 32; i++){
		if(i % 8 == 0 && i != 0) printf(" ");
		printf("%d", ans[i]);
	}
}

