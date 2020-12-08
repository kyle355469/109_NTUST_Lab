#include <string.h>
#include <stdio.h>
int haha(char*, const char[]);
int main()
{
  	char str[100];
 	fgets(str, 100, stdin);
 	for(int i = 0; i < 100; i++){
 		if(str[i] == '\0'){
 			char tmp = str[i - 1];
 			str[i - 1] = str[i];
 			str[i] = tmp;
		 }
	 }
 	const char s[2] = " ";
 	char *token = strtok(str, s);
    haha(token, s);
}

int haha(char *token, const char s[]){
	if(token != NULL){
		haha(strtok(NULL, s), s);
	}
	if(token != NULL){
		printf("%s ", token);
	}
} 
