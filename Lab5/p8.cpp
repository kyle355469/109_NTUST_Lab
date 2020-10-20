#include <stdio.h>

int main() {
	int prime[200] = {2, 3, 5, 7, 11, 13};
	int nowP = 6;
	for(int i = 13; i < 1200; i++){
		int check = 1;	
		for(int j = 0; j < nowP; j++){
			if(i % prime[j] == 0){
				check = 0;
				break;
			}
		}
		if(check){
			 prime[nowP] = i;
			 nowP++;
		} 
	}
	for(int i = 0; i < nowP - 1; i++){
		if(prime[i + 1] - prime[i] == 2){
			printf("(%d, %d)\n", prime[i], prime[i + 1]);
		}
	}
}
