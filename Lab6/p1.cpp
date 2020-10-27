#include <stdio.h>


int triangle(int a, int b, int c){
	if(a > b && a > c && b + c > a){
		return 1;
	}else if(b > a && b > c && a + c > b){
		return 1;
	}else if(c > a && c > b && a + b > c){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", triangle(a, b, c));
} 
