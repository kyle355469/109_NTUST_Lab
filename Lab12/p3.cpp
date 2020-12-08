#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[20] = {};
	scanf("%s", str);
	const char s[4] = {"()-"};
	char *token = strtok(str, s);
	char **ptr;
	int title = strtol(token, ptr, 10);
	token = strtok(NULL, s);
	int num1 = strtol(token, ptr, 10);
	token = strtok(NULL, s);
	int num2 = strtol(token, ptr, 10);
	int num = num1 * 10000 + num2;
	printf("%02d%08d", title, num);
} 


