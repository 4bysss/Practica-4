#include <stdio.h>
#define MAX 20
void latin (int matrix [][MAX],int *n);
int main(){
	int matrix [MAX][MAX];
	int n,i,j;
	printf("How big do you want the latin square?");
	scanf("%i",&n);
	latin (matrix, &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("[%i]",*(*(matrix+i)+j));
		}
	printf("\n");
	}
	return 0;
}
//void latin(int matrix [][MAX],*n)
//precondition max 20 
//postcondition makes the latin square
void latin (int matrix[][MAX], int *n){
	int i,j;
	for(i=0;i<*n;i++){
		for(j=0;j<*n;j++){
			if ((i+j+1)>*n){
				*(*(matrix+i)+j)=i+j+1-*n;
			}
			else{
				*(*(matrix+i)+j)=i+j+1;
			}
		}
	}
}

