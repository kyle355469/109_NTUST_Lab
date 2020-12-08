#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[1000] = {};
	fgets(str, 1000, stdin);
	char search[100];
	scanf("%s", search);
	int count = 0;
	char *finder = strstr(str, search);
	while(finder != NULL){
		printf("%s", finder);
		count++;
		finder = strstr(finder + 1, search);
	}
	printf("%d", count);
} 

