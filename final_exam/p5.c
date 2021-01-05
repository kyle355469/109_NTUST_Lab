#include <stdio.h>

int main(){
	while(1){
		long long int ask;
		printf("num = ");
		scanf("%lld", &ask);
		int arr[11];
		int pos = 0;
		while(ask != 0){
			arr[pos++] = ask % 10;
			ask /= 10;
		}
		printf("\"");
		int i;
		for(i = pos - 1; i >= 0; i--){
			if((i == 1 || i == 4 || i == 7 || i == 10) && arr[i] == 1){
				switch(arr[--i]){
					case 0:
						printf("Ten ");
					case 1:
						printf("Eleven ");
						break;
					case 2:
						printf("Twelve ");
						break;
					case 3:
						printf("Thirteen ");
						break;
					case 4:
						printf("Fourteen ");
						break;
					case 5:
						printf("Fifteen ");
						break;
					case 6:
						printf("Sixteen ");
						break;
					case 7:
						printf("Seventeen ");
						break;
					case 8:
						printf("Eighteen ");
						break;
					case 9:
						printf("Nighteen ");
						break;
					
				}
			}
			else if((i == 1 || i == 4 || i == 7 || i == 10)){
				switch(arr[i]){
					case 2:
						printf("Twenty ");
						break;
					case 3:
						printf("Thirty ");
						break;
					case 4:
						printf("Forty ");
						break;
					case 5:
						printf("Fifty ");
						break;
					case 6:
						printf("Sixty ");
						break;
					case 7:
						printf("Seventy ");
						break;
					case 8:
						printf("Eighty ");
						break;
					case 9:
						printf("Nighty ");
						break;
				}
			}
			else{
				switch(arr[i]){
					case 1:
						printf("One ");
						break;
					case 2:
						printf("Two ");
						break;
					case 3:
						printf("Three ");
						break;
					case 4:
						printf("Four ");
						break;
					case 5:
						printf("Five ");
						break;
					case 6:
						printf("Six ");
						break;
					case 7:
						printf("Seven ");
						break;
					case 8:
						printf("Eight ");
						break;
					case 9:
						printf("Nine ");
						break;
				}
			}
			if(i == 3) printf("Thousand ");
			else if((i == 2 || i == 5|| i == 8) && arr[i] != 0) printf("Hundred ");
			else if(i == 6) printf("Million ");
			else if(i == 9) printf("Billion ");
		}
		printf("\"\n");
	}
}
