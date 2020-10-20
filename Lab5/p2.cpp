#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	while(num){
		for(int i = 2; i <= num; i++){
			while(!(num % i)){
				printf("%d ", i);
				num /= i;
			}
		}
	}
}
