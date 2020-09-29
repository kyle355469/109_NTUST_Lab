#include <stdio.h>

int main(){
	int y, m, d;
	printf("Enter year:");
	scanf("%d", &y);
	printf("Enter month(1-12):");
	scanf("%d", &m);
	printf("Enter the day of the month(1-31):");
	scanf("%d", &d);
	if(m == 1 || m == 2){
		m += 12;
		y -= 1;
	}
	int k = y % 100;
	int j = y / 100;
	//printf("%d", (m + 1) * 26 / 10);
	int ans = (d + (m + 1) * 26 / 10 + k + k / 4 + j / 4 + j * 5) % 7;
	switch(ans){
		case 2:
			printf("Day of the week is Monday");
			break;
		case 3:
			printf("Day of the week is Tuesday");
			break;
		case 4:
			printf("Day of the week is Wednesday");
			break;
		case 5:
			printf("Day of the week is Thursday");
			break;
		case 6:
			printf("Day of the week is Friday");
			break;
		case 0:
			printf("Day of the week is Saturday");
			break;
		case 1:
			printf("Day of the week is Sunday");
			break;
	}
}  
/*12 + 26 * 6 / 10 + 12 + 3 + 5 + 100
132 + 15.6 6 + 1*/
