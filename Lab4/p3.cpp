#include <stdio.h>

int main(){
	float total;
	int p, q, qt = 0;
	scanf("%d", &p);
	while(p != -1){
		for(int i = 0; i < 7; i++){
			scanf("%d", &q);
			qt += q;
		}
		
		switch(p){
			case 1:
				total += (qt * 2.98);
				break;
			case 2:
				total += (qt * 4.5);
				break;
			case 3:
				total += (qt * 9.98);
				break;
			case 4:
				total += (qt * 4.49);
				break;
			case 5:
				total += (qt * 6.87);
				break;
		}
		scanf("%d", &p);
	}
	printf("%.2f", total);
}
