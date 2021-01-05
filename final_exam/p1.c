#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct number{
	double real;
	double img;
}Number;

void add_complex(Number, Number);

int main(){
	printf("Enter two complex number:");
	char str1[50], str2[50];
	scanf("%s %s", str1, str2);
	Number n1, n2;
	char *strptr;
	n1.real = strtod(str1, &strptr);
	//printf("%lf\n", n1.real);
	char *token = strtok(str1, "+i");
	token = strtok(NULL, "+");
	n1.img = strtod(token, &strptr);
	//printf("%lf\n", n1.img);
		
	n2.real = strtod(str2, &strptr);
	//printf("%lf\n", n2.real);
	token = strtok(str2, "+i");
	token = strtok(NULL, "+i");
	n2.img = strtod(token, &strptr);
	//printf("%lf\n", n2.img);
	add_complex(n1, n2);
}  

void add_complex(Number n1, Number n2){
	Number ans;
	ans.real = n1.real + n2.real;
	ans.img = n1.img + n2.img;
	printf("The sum is %g+%gi", ans.real, ans.img);
	
}
