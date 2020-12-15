#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef struct sci_not_t{
	double mantissa;
	int exponent;
}Sci;
Sci print_sci(Sci, char);
void calc(Sci, Sci);
Sci scan_sci(char[]);
int main(){
	char arr1[100], arr2[100];
	printf("Value input: ");
	scanf("%s%s", arr1, arr2);
	Sci n1 = scan_sci(arr1);
	Sci n2 = scan_sci(arr2);
	
	calc(n1 ,n2);
} 
Sci scan_sci(char bf_trans[]){
	char *token;
	token = strtok(bf_trans, "e");
	Sci af_trans;
	char *ptr;
	af_trans.mantissa = strtod(token, &ptr);
	token = strtok(NULL, "\0");
	af_trans.exponent = strtol(token, &ptr, 10);
	return af_trans;
}
void calc(Sci n1, Sci n2){
	Sci sum, dif, pro, quo;
	sum.exponent = 0;
	dif.exponent = 0;
	pro.exponent = 0;
	quo.exponent = 0;
	sum.mantissa = pow(10,n1.exponent) * n1.mantissa + pow(10,n2.exponent) * n2.mantissa;
	while(sum.mantissa >= 1){
		sum.mantissa /= 10;
		sum.exponent += 1;
	}
	print_sci(sum, '+');
	dif.mantissa = pow(10,n1.exponent) * n1.mantissa - pow(10,n2.exponent) * n2.mantissa;
	while(dif.mantissa >= 1){
		dif.mantissa /= 10;
		dif.exponent += 1;
	}
	print_sci(dif, '-');
	pro.mantissa = pow(10,n1.exponent) * n1.mantissa * pow(10,n2.exponent) * n2.mantissa;
	while(pro.mantissa >= 1){
		pro.mantissa /= 10;
		pro.exponent += 1;
	}
	print_sci(pro, '*');
	quo.mantissa = (pow(10,n1.exponent) * n1.mantissa) / (pow(10,n2.exponent) * n2.mantissa);
	while(quo.mantissa >= 1){
		quo.mantissa /= 10;
		quo.exponent += 1;
	}
	print_sci(quo, '/');
}

Sci print_sci(Sci ans, char type){
	switch(type){
		case '+':
			printf("Sum: %fe%d\n", ans.mantissa, ans.exponent);
			break;
		case '-':
			printf("Difference: %fe%d\n", ans.mantissa, ans.exponent);
			break;
		case '*':
			printf("Product: %fe%d\n", ans.mantissa, ans.exponent);
			break;
		case '/':
			printf("Quotient: %fe%d\n", ans.mantissa, ans.exponent);
			break;
	}
}
