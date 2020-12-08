#include <stdio.h>
#include <stdlib.h>

int palindromeString(char[], int, int);
int main(){
	char str[100] = {};
	fgets(str, 100, stdin);
	int i;
	for(i = 0; i < 100; i++){
		if(str[i] == '\0') break;
	}
	palindromeString(str,0 , i - 1) ? printf("yes") : printf("no");
} 


int palindromeString(char arr[],int nowlow, int nowtop){
	if((arr[nowtop] < 'a' || arr[nowtop] > 'z') && (arr[nowtop] < 'A' || arr[nowtop] > 'Z')){
		return palindromeString(arr, nowlow, nowtop - 1);
	}else if((arr[nowlow] < 'a' || arr[nowlow] > 'z') && (arr[nowlow] < 'A' || arr[nowlow] > 'Z')){
		return palindromeString(arr, nowlow + 1, nowtop);
	}
	
	if(nowlow >= nowtop){
		return 1;
	}
	if(arr[nowlow] != arr[nowtop]){
		return 0;
	}else{
		return palindromeString(arr, nowlow + 1, nowtop - 1);
	}
}


