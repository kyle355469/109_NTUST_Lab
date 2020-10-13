#include <stdio.h>
#include <math.h>
int main(){
	bool isprime[1001];
	for(int i = 0; i < 1001; i++){
		isprime[i] = true;
	}
	isprime[0] = false;
	isprime[1] = false;
	for(int i = 2; i < 1001; i++){
		if(isprime[i]){
			int j = i + i;
			while(j <= 1000){
				isprime[j] = false;
				j += i;
			}
		}
	}
	for(int i = 0; i < 1001; i++){
		if(isprime[i]){
			printf("%d\n", i);
		}
	}
}
