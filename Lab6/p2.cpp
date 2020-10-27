#include <stdio.h>
#include <math.h>

void roots(int a, int b, int c){
	if(pow(b, 2) - 4 * a * c > 0){
		float ans1 = (b * -1 + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		float ans2 = (b * -1 - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		printf("the roots are %f & %f", ans1, ans2);
	}else if(pow(b, 2) - 4 * a * c < 0){
		printf("the roots aren't real");
	}else{
		float ans = (b * -1) / (2 * a);
		printf("%f & %f", ans, ans);
	}
}

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	roots(a, b, c);
} 
