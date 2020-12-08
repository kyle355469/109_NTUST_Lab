#include <string.h>
#include <stdio.h>

int main(){
	int i = 0;
	int count = 0;
	while(i < 4){
		char str[100];
	 	fgets(str, 100, stdin);
	 	const char s[2] = " ";
	 	char *token = strtok(str, s);
	     
	    while(token != NULL) {
	   		count++;
	      	token = strtok(NULL, s);
	  	}
		i++;
	}
  	printf("%d",count);
}
