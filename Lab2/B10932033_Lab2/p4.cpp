#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	if(num % 10 == num / 10000 && num / 10 % 10 == num / 1000 % 10){
		printf("It is a palindrome");
	}else{
		printf("It is not a palindrome");
	}
}  
