#include <stdio.h>
void multiplicator (int matryx1[][3],int matryx2[][3], int result[][3]);
void matrix_reader (int matrix [][3]);
int main(){
	int i,j;
	int matrix1 [3][3];
	int matrix2[3][3];
	int result [3][3];
	printf ("Give me the values for the matrix so I can multiply them\n");
	printf("Matrix 1\n");
	matrix_reader(matrix1);
	printf("Matrix 2\n");
	matrix_reader(matrix2);
	multiplicator (matrix1,matrix2,result);
	printf("The result of the multiplication is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%i]  ",*(*(result+i)+j));
		}
	printf("\n");
	}
	return 0;
}
//void matrix_reader(int matrix [][3])
//precondition: Only integer numbers allowed
//postcondition: Reads all the values of the matrix
void matrix_reader(int matrix [][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%i]  [%i]",i+1,j+1);
			scanf("%i",*(matrix+i)+j);
		}
	printf("\n");
	}
}
//void multiplicator (int matrix1[][3],matrix2[][3];result[][3])
//precondition:NONE
//Postcondition:Multiplicates the first a the second matrix and returns the result in a third value
void multiplicator(int matrix1[][3],int matrix2[][3],int result[][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			*(*(result+i)+j)=*(*(matrix1+i)+j) * *(*(matrix2+i)+j);
		}
	}
}













