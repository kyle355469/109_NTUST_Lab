#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[6][100] = {};
	int cmp[6];
	for(int i = 0; i < 6; i++){
		scanf("%s", str[i]);
		cmp[i] = i;
	}	
	for(int i = 0; i < 6; i++){
		for(int j = i + 1; j < 6; j++){
		
			if(strcmp(str[cmp[j]], str[cmp[i]]) < 0){
				int tmp = cmp[j];
				cmp[j] = cmp[i];
				cmp[i] = tmp;
			}
			
		}
	}
	for(int i = 0; i < 6; i++){
		//printf("%d ", cmp[i]);
		printf("\"%s\" ", str[cmp[i]]);
	}
	
} 

