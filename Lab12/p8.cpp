#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
int main(){
	char *article[] = {"the", "a", "one", "some", "any"};
	char *noun[] = {"boy", "girl", "dog", "town", "car"};
	char *verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
	char *pre[] = {"to", "from", "over", "under", "on"};
	srand(time(NULL));
	for(int i = 0; i <  20; i++){
		char s[200] = {};
		strcat(s, article[rand() % 5]);	
		strcat(s, " ");
		strcat(s, noun[rand() % 5]);	
		strcat(s, " ");
		strcat(s, verb[rand() % 5]);	
		strcat(s, " ");
		strcat(s, pre[rand() % 5]);	
		strcat(s, " ");
		strcat(s, article[rand() % 5]);	
		strcat(s, " ");
		strcat(s, noun[rand() % 5]);	
		strcat(s, ".");
		
		s[0] = toupper(s[0]);
		printf("%s\n", s);
	}
		
} 

