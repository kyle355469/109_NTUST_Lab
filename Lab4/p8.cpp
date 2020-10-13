#include <stdio.h>
int main(){
	int isprime[200000];
	for(int i = 0; i < 200000; i++){
		isprime[i] = 1;
	}
	isprime[0] = false;
	isprime[1] = false;
	for(int i = 2; i < 200000; i++){
		if(isprime[i]){
			int j = i + i;
			while(j <= 200000){
				isprime[j] = false;
				j += i;
			}
		}
	}
	int count = 0;
	for(int i = 2; i < 200000; i++){
		if(count == 120){
			break;
		}
		if(isprime[i]){
			int j = i;
			if(i < 10){
				printf("%d ", i);
				count++;
				if(count % 10 == 0){
					printf("\n");
				}
			}else if(i < 100 && i >= 10 && i / 10 == i % 10){
				printf("%d ", i);
				count++;
				if(count % 10 == 0){
					printf("\n");
				}
			}else if(i < 1000 && i >= 100 && i / 100 == i % 10 && i / 10 % 10 == i / 10 % 10){
				printf("%d ", i);
				count++;
				if(count % 10 == 0){
					printf("\n");
				}
			}else if(i < 100000 && i >= 10000 && i / 10000 == i % 10 && i / 10 % 10 == i / 1000 % 10){
				printf("%d ", i);
				count++;
				if(count % 10 == 0){
					printf("\n");
				}
			}else if(i < 200000 && i >= 100000 && i / 100000 == i % 10 && i / 10 % 10 == i / 10000 % 10 && i / 100 % 10 == i / 1000 % 10){
				printf("%d ", i);
				count++;
				if(count % 10 == 0){
					printf("\n");
				}
			}
		}
	}
}
