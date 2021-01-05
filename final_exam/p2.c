#include <stdio.h>

int main(){
	while(1){
		int num;
		printf("Kind of coins :");
		scanf("%d", &num);
		int value[num];
		printf("Coins of different denominations :");
		int i;
		for(i = 0; i < num; i++){
			scanf("%d", &value[i]);
		}
		int ask;
		printf("Amount :");
		scanf("%d", &ask);
		int count = 0;
		for(i = num - 1; i >= 0; i--){
			while(ask / value[i] != 0 && ask){
				count += ask / value[i];
				ask %= value[i];
			}
		} 
		if(ask){
			printf("-1\n");
		}else{
			printf("%d\n", count);
		}
	}
} 
