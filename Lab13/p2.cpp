#include <stdio.h>
#include <string.h>

struct Number{
	float real;
	float imaginary;
};
Number add_complex(Number, Number);

int main(){
	Number n1, n2;
	printf("Enter two complex number: ");
	scanf("%f+%fi", &n1.real, &n1.imaginary);
	scanf("%f+%fi", &n2.real, &n2.imaginary);
	//printf("%s\n%s", ask1, ask2);
	Number ans = add_complex(n1, n2);
	printf("The sum is %.1f+%.1fi", ans.real, ans.imaginary);
		
} 

Number add_complex(Number n1, Number n2){
	Number ans;
	ans.imaginary = n1.imaginary + n2.imaginary;
	ans.real = n1.real + n2.real;
	return ans;
}
