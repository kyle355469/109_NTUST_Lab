#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct address_t{
	//int host[4];
	int first;
	int second;
	int third;
	int forth;
	char name[10];
}Address;

Address scan_address(char[] ,char[]);
int print_address(Address, Address);
int local_address(Address, Address); //return 1 for same local, else for 0.

int main(){
	char input[100], name[10];
	Address User[100];
	int i = -1;
	do{
		i++;
		scanf("%s%s", input, name);
		User[i] = scan_address(input, name);
		
	}while(User[i].first != 0 && User[i].second != 0 && User[i].third != 0 && User[i].forth != 0);
	/*for(int j = 0; j < i; j++){
		printf("%d.%d.%d.%d %s\n", User[j].first, User[j].second, User[j].third, User[j].forth, User[j].name);
	}*/
	for(int j = 0; j < i; j++){
		for(int k = j + 1; k < i; k++){
			if(local_address(User[j], User[k])){
				print_address(User[j], User[k]);
			}
		}
	}
}

Address scan_address(char num[], char name[]){
	char *token;
	char *ptr;
	token = strtok(num, ".");
	Address trans;
	trans.first = strtol(token, &ptr, 10);
	token = strtok(NULL, ".");
	trans.second = strtol(token, &ptr, 10);
	token = strtok(NULL, ".");
	trans.third = strtol(token, &ptr, 10);
	token = strtok(NULL, ".");
	trans.forth = strtol(token, &ptr, 10);
	strcpy(trans.name, name);
	return trans;
}

int local_address(Address a, Address b){
	if(a.first == b.first && a.second == b.second){
		return 1;
	}else return 0;
}

int print_address(Address a, Address b){
	printf("Machines %s and %s are on the same local network.\n", a.name, b.name);
} 
