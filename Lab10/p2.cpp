#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int commend;
	int nowx = 20,nowy = 20;
	char arr[50][50] = {};
	bool keep = true;
	bool DrawOrNot = false;
	int face = 3; 	//1¤W2¥k3¤U4¥ª 
	do{
		scanf("%d", &commend);
		switch(commend){
			case 1:
				DrawOrNot = false;
				break;
			case 2:
				DrawOrNot = true;
				break;
			case 3:
				face++;
				if(face == 5) face = 1; 
				break;
			case 4:
				face--;
				if(face == 0) face = 4;
				break;
			case 5:
				int move;
				scanf("%d", &move);
				switch(face){
					case 1:
						for(int i = 0; i < move; i++){
							if(DrawOrNot) arr[nowy][nowx] = 'X';
							nowy--;
						}
						break;
					case 2:
						for(int i = 0; i < move; i++){
							if(DrawOrNot) arr[nowy][nowx] = 'X';
							nowx++;
						}
						break;
					case 3:
						for(int i = 0; i < move; i++){
							if(DrawOrNot) arr[nowy][nowx] = 'X';
							nowy++;
						}
						break;
					case 4:
						for(int i = 0; i < move; i++){
							if(DrawOrNot) arr[nowy][nowx] = 'X';
							nowx--;
						}
						break;
				}
				break;
			case 6:
				for(int i = 0; i < 50; i++){
					for(int j = 0; j < 50; j++){
						printf("%c ", arr[i][j]);
					}
					printf("\n");
				}
				break;
			case 9:
				keep = false;
				break; 
		}
	}while(keep);
} 
