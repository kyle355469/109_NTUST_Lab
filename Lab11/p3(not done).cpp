#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int*, int*);
int card[4][13] = {};
void shuffle();
int main(){
	shuffle();
	int hand[5] = {};
	for(int i = 0; i < 5; i++){
		hand[i] = card[0][i];
	}
	int ispair= 0;//
	int istwopair = 0;//
	int isthree = 0;//
	int isfour = 0;//
	int isflush = 1;//
	int isfullhouse = 0;//
	int isstraight = 0;
	int handcpy[5][2];
	for(int i = 0; i < 5; i++){
		handcpy[i][0] = hand[i] / 13; //flower
		handcpy[i][1] = hand[i] % 13; // number
	}
	for(int i = 0; i < 4; i++){
		for(int j = i + 1; j < 5; j++){
			if(handcpy[i][0] == handcpy[j][0] && !ispair) ispair = 1;
			else if(handcpy[i][0] == handcpy[j][0] && ispair) istwopair = 1;
			for(int k = j + 1; k < 5; k++){
				if(handcpy[i][0] == handcpy[j][0] && handcpy[i][0] == handcpy[k][0]) isthree = 1;
				for(int l = k + 1; l < 5; l++){
					if(handcpy[i][0] == handcpy[j][0] && handcpy[i][0] == handcpy[k][0] && handcpy[i][0] == handcpy[l][0]){
						isfour = 1;
					}
				}
			}
		}
	}
	for(int i = 1; i < 5; i++){
		if(handcpy[i][0] != handcpy[0][0]) isflush = 0;
	}
	if(ispair && isthree) isfullhouse = 1;
	int handnum[5];
	for(int i = 0; i < 5; i++){
		handnum[i] = hand[i] % 13;
	}
	int num[13];
	for(int i = 0; i < 5; i++){
		num[handcpy[i][1]]++;
	}
	for(int i = 0; i < 13; i++){
		if(num[i] == 1){
			int count;
			for(int j = i; j < i + 5; j++){
				count += num[j];
			}
			if(count == 5){
				isstraight = 1;
			}
		}
	}
	if(ispair) printf("is pair\n");
	if(istwopair) printf("is two pairs\n");
	if(isthree) printf("is three of a kind\n");
	if(isfour) printf("is four of a kind\n");
	if(isflush) printf("is flush\n");
	if(isfullhouse) printf("is a full house\n");
	if(isstraight) printf("is straight\n");
}

void shuffle(){
	srand(time(NULL));
	int arr[4][13] = {};
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			arr[i][j] = i * 13 + j + 1;
		}
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			int a = rand();
			swap(&arr[i][j], &arr[a % 4][a % 13]);
		}
	}
}
void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
