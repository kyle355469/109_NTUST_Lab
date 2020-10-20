#include <stdio.h>

int main() {
	int i = 1;
	while(1){
		if(i * i * i >= 12000){
			printf("%d", i);
			break;
		}
		i++;
	}
}
