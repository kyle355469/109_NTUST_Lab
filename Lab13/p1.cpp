#include <stdio.h>
#include <string.h>

int fact_calc(int,long long int, char[]);

int main(){
	int a;
	scanf("%d", &a);
	while(a != -1){
		char ans[100] = {};
		if(a > 9 || a < -1){
			printf("Invalid entry\n");
		}else if(a == 0){
			printf("******\n*0!=1*\n******");
		}else{
			strcat(ans, "*");
			char tmp[10] = {};
			sprintf(tmp, "%d!=", a);
			strcat(ans, tmp);
			fact_calc(a, 1, ans);
			strcat(ans, "*\0");
			for(int i = 0; i < strlen(ans); i++){
				printf("*");
			}printf("\n");
			printf("%s\n", ans);
			for(int i = 0; i < strlen(ans); i++){
				printf("*");
			}printf("\n");
		}
		scanf("%d", &a);
	}
		
	
} 

int fact_calc(int num, long long int tot, char ans[]){
	if(num != 1){
		char tmp[100] = {};
		sprintf(tmp, "%dx", num);
		strcat(ans, tmp);
		fact_calc(num - 1, tot * num, ans);
	}else{
		char tmp[100] = {};
		sprintf(tmp, "1=%lld",tot);
		strcat(ans, tmp);
	}
}
