#include <stdio.h>
#include <math.h>
int main() {
	int prime[1000] = {2, 3, 5, 7, 11, 13};
	int nowP = 6;
	for(int i = 13; i < 100000; i++){
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
/*	int c = 0;
	for(int i = 0; i < nowP; i++){
		printf("%d ", prime[i]);
		c++;
		if(c == 10){
			printf("\n");
			c = 0;
		}
	}*/
	int emirp[120] = {};
	int nowE = 0;
	for(int i = 0; i < nowP; i++){
		int check = 1;
		if(prime[i]>= 10 && prime[i] < 100 && prime[i] / 10 != prime[i] % 10){
			int ask = prime[i] / 10 + prime[i] % 10 * 10;
			for(int j = 0; prime[j] < sqrt(ask); j++){
				if(ask % prime[j] == 0){
					check = 0;
					break;
				}
			}
			if(check){
				emirp[nowE] = prime[i];
				nowE++;
			}
		}else if(prime[i] >= 100 && prime[i] < 1000 && prime[i] % 10 != prime[i] / 100){
			int ask = prime[i] % 10 * 100 + prime[i] / 10 % 10 * 10 + prime[i] / 100;
			for(int j = 0; prime[j] < sqrt(ask); j++){
				if(ask % prime[j] == 0){
					check = 0;
					break;
				}
			}
			if(check){
				emirp[nowE] = prime[i];
				nowE++;
			}
		}else if(prime[i] >= 1000 && prime[i] < 10000 && prime[i] % 10 != prime[i] / 1000 
		&& prime[i] / 10 % 10 != prime[i] / 100 % 10){
			int ask = prime[i] % 10 * 1000 + prime[i] / 10 % 10 * 100 + prime[i] / 100 % 10 * 10 + prime[i] / 1000;
			for(int j = 0; prime[j] < sqrt(ask); j++){
				if(ask % prime[j] == 0){
					check = 0;
					break;
				}
			}
			if(check){
				emirp[nowE] = prime[i];
				nowE++;
			}
		}
		if(nowE == 121){
			break;
		}
	}
	int count = 0;
	for(int i = 0; i < 120; i++){
		printf("%d ", emirp[i]);
		count++;
		if(count == 10){
			printf("\n");
			count = 0;
		}
	}
}
