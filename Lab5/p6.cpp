#include <stdio.h>

int main() {
	int max = 0;
	int MaxCount = 0;
	int now = 0;
	printf("Enter numbers:");
	while(scanf("%d", &now) && now != 0){
		if(now > max){
			max = now;
			MaxCount = 1;
		}else if(now == max){
			MaxCount++; 
		}
	}
	printf("The largest number is %d\nThe occurrence count of the largert number is %d", max, MaxCount);
}
