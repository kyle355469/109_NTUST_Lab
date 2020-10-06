#include <stdio.h>
#include <algorithm>
#include <vector>
int main(){
	int arr[2] = {};
	int now;
	int i = 10;
	while(i != 0){
		scanf("%d", &now);
		if(now >= arr[0]){
			arr[1] = arr[0];
			arr[0] = now;
		}
		else if(now >= arr[1]) arr[1] = now;
		i--; 
	}
	printf("largest : %d, second : %d", arr[0], arr[1]);
} 
