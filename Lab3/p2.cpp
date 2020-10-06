#include <stdio.h>

int main(){
	int time = 0;
	printf("Enter # of hours worked (-1 to end): ");
	scanf("%d", &time);
	while(time != -1){
		float paid, ans;
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%f", &paid);
		if(time > 40){
			ans = paid * 40 + paid * 1.5 * (time - 40);
		}else{
			ans = paid * time;
		}
		printf("Salary is: $%.2f\n", ans);
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &time);
	}
} 
