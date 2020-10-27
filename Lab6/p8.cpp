#include <stdio.h>
#include <math.h>

int Mprime(int num){
	//printf("%dx\n", num);
	int ans = pow(2, num) - 1;
	for(int i = 2; i <= sqrt(ans); i++){
		if(ans % i == 0) return 0;
	}
	if(num < 10){
		printf("%d   %d\n", num, ans);
	}else{
		printf("%d  %d\n", num, ans);
	}
	
}

int main(){
	printf("%s   %s\n","p","2^p - 1");
	for(int i = 2; i <= 31; i++){
		Mprime(i);
	}
} 
