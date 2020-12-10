#include <stdio.h>
#define MAX 20
void matrix_reader(int matrix [][MAX],int *n);
void coincidence_finder(int matrix [][MAX],int *n,int *found);
int main(){
	int i,j,n,found;
	found=0;
	int matrix [MAX][MAX];
	printf("How big is you SQUARE matrix?\n");
	scanf("%i",&n);
	matrix_reader (matrix,&n);
	printf("Your matrix isss\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("[%i]  ",*(*(matrix+i)+j));
		}
		printf("\n");
	}
	printf("\n");
	coincidence_finder(matrix,&n,&found);
	if(found==0){
		printf("No coincidences found");
	}
	return 0;
}
//void matrix_reader (int matrix [][MAX],int *n)
//Preconditiom:Max 20 integers
//postcondition: read all the values of the matrix
void matrix_reader (int matrix [][MAX],int *n){
	int i,j;
	for(i=0;i<*n;i++){
		for(j=0;j<*n;j++){
			printf("[%i]  [%i]",i+1,j+1);
			scanf("%i",*(matrix+i)+j);
		}
	printf("\n");
	}
}
//coincidence_finder(int matrix[][MAX],int *n);
//precondition none
//postcondition, finds the coincidences and tells you where it is
void coincidence_finder(int matrix[][MAX],int *n,int *found){
	int i,j,k,l;
	for(l=0;l<*n;l++){
		for(k=l;k<*n;k++){
			for(i=0;i<*n;i++){
				for(j=0;j<*n;j++){
					if(*(*(matrix+k)+k) * *(*(matrix+l)+l) == (*(*(matrix+i)+j))&&k!=l){
						printf("Coincidence found [%i][%i]x[%i][%i]=[%i][%i]\n",l+1,l+1,k+1,k+1,i+1,j+1);
						printf("%i x %i = %i\n",*(*(matrix+l)+l),*(*(matrix+k)+k),*(*(matrix+i)+j));
						*found=1;
					}
				}
			}
		}
	}
}


		











