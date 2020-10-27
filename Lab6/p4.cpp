#include <stdio.h>
#include <math.h>

int  getPentagonalNumber(int n){
	return (n * (3 * n - 1)) / 2;
}

int main(){
	for(int i = 1; i <= 100; i++){
		printf("%d\n", getPentagonalNumber(i));	
	}
} 
