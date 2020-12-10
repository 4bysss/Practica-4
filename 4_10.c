#include <stdio.h>
#define M 3
void matrix_reader (int matrix[][M]);
void matrix_transposer (int matrix [][M],int transposed [][M]);
int main (){
	int i,j;
	int matrix [M][M];
	int transposed [M][M];
	printf("GIVE A MATRIX TO TRANSPOSE\n");
	matrix_reader (matrix);
	printf("Your matrix is\n");
	for(i=0;i<M;i++){
			for(j=0;j<M;j++){
			printf("%i  ",*(*(matrix+i)+j));
			}
	printf("\n");
	}
	matrix_transposer (matrix,transposed);
	printf("Yout transposed matrix is \n");
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			printf("%i  ", *(*(transposed+i)+j));
		}
	printf("\n");
	}
	return 0;}
//void matrix_reader (int matrix [][M])
//precondition none
//postcondion read the elements of the array
void matrix_reader (int matrix[][M]){
	int i,j;
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			printf("[%i]  [%i]", i+1,j+1);
			scanf("%i",*(matrix+i)+j);
		}
	printf("\n");
	}
}
//void matrix_transposer (int matrix[][M],int transposed[][M])
//precondition none
//postcondition transposes the goven matrix
void matrix_transposer (int matrix [][M],int transposed[][M]){
	int i,j;
	for (i=0;i<M;i++){
		for(j=0;j<M;j++){
			*(*(transposed+j)+i)=*(*(matrix+i)+j);
		}
	}
}










