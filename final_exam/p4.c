#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int arr[6] = {};
	int i = 0;
	char str[100]; 
	char *ptr;
	scanf("%s", str);
	printf("%s\n", str);
	char *token = strtok(str, " ");
	char *strptr;
	while(token != NULL){
		arr[i++] = strtol(token, &strptr, 10);
		token = strtok(NULL, " ");
	};
	int j;
	for(j = 0; j < i; j++){
		printf("%d ", arr[j]);
	}
}
