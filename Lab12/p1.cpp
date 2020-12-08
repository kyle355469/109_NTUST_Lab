#include <stdio.h>
#include <stdlib.h>
void stringReverse(char[], int);

int main(){
	char str[100] = {};
	scanf("%s", str);
	stringReverse(str, 0);
} 


void stringReverse(char str[], int now){
	if(str[now] != '\0'){
		stringReverse(str, now + 1);
	}
	if(str[now] != '\0')
		printf("%c", str[now]);
}
