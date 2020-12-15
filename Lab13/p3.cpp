#include <stdio.h>
#include <string.h>
struct fraction{
	int numerator;
	int denominator;
};
int gcd(int, int);
void reduce(fraction, fraction*);
int main(){
	fraction num;
	printf("Enter a fraction:");
	scanf("%d/%d", &num.numerator, &num.denominator);
	fraction *ptr = &num;
	reduce(num, ptr);
	printf("In lowest terms: %d/%d", ptr->numerator, ptr->denominator);
} 
void reduce(fraction num, fraction *ptr){
	int insu = 0;
	if(num.numerator >= num.denominator){
		insu = gcd(num.numerator, num.denominator);
		ptr->denominator = num.denominator / insu;
		ptr->numerator = num.numerator / insu;
	}else{
		insu = gcd(num.denominator, num.numerator);
		ptr->denominator = num.denominator / insu;
		ptr->numerator = num.numerator / insu;
	}
}
int gcd(int a, int b){
	if(b == 1){
		return 1;
	}
	else if(a % b != 0){
		return gcd(b, a % b);
	}else{
		return b;
	}	
}


