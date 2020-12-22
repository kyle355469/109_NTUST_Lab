#include <stdio.h>

void sort(float[], int, float[], int);

int main(){
	float arr1[20], arr2[20];
	
	scanf("%f", &arr1[0]);
	char c;
	int i = 1;
	while((c = getchar()) != '\n'){
		scanf("%f", &arr1[i++]);
	}
	
	scanf("%f", &arr2[0]);
	int j = 1;
	while((c = getchar()) != '\n'){
		scanf("%f", &arr2[j++]);
	}
	sort(arr1, i, arr2, j);
}

void sort(float a[], int asize, float b[], int bsize){
	float ans[asize + bsize] = {};
	int i = 0, j = 0, k = 0;
	int check = 1;
	while(i <= asize || j <= bsize){
		if(i == asize && j < bsize){
			for(j; j < bsize; j++){
				ans[k++] = b[j];
			//printf("%f\n", ans[k - 1]);
			}
			check = 0;
			break;
		}else if(j == bsize && i < asize){
			for(i; i < asize; i++){
				ans[k++] = a[i];
			//printf("%f\n", ans[k - 1]);
			}
			check = 0;
			break;
		}
		if(!check) break;
		if(a[i] < b[j]){
			//printf("%f %f  a<b\n", a[i], b[j]);
			ans[k++] = a[i++];
			//printf("%f\n", ans[k - 1]);
		}else if(a[i] > b[j]){
			//printf("%f %f  a>b\n", a[i], b[j]);
			ans[k++] = b[j++];
			//printf("%f\n", ans[k - 1]);
		}else{
			//printf("%f %f  a=b\n", a[i], b[j]);
			ans[k++] = a[i++];
			//printf("%f\n", ans[k - 1]);
			j++; 
		}
		
	}
	for(int l = 0; l < k; l++){
		printf("%g ", ans[l]);
	}
}

/*
-12 -7.65 -2.4 0 1.18 7.92 12.888 24.23
-13.5 -1.423 0.023 1.0112 2.5

-256.44 -101.393 -33.2356 -1.123 6.8
-4.543 -1.123 64.8 140.231 236.22 484.93 5893.231 32233.2

-23.2 -14.8 34.69 39.88 57.45
-16.83 -6.34 8.893 15.223 60.54
*/
