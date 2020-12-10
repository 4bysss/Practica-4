#include <stdio.h>
int matrix_comparator(int matrix[][3]);
void matrix_reader (int matrix[][3]);
int main(){
	int i,j,sym;
	int matrix[3][3];
	printf ("Give me a matix and I will tell you if its symmetrical or not\n");
	matrix_reader(matrix);
	printf("Your matrix is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%i  ",*(*(matrix+i)+j));
		}
		printf("\n");
	}
	sym=matrix_comparator(matrix);
	if(sym==0){
		printf("Your matrix is not symmetrical");
	}
	else{
		printf("Your matrix is symmetrical");
	}
	return 0;}
//void matrix_reader(int matrix[][3]);
//precondition none
//postcondiition read de elements of the matrix
void matrix_reader(int matrix[][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%i]  [%i]",i+1,j+1);
			scanf("%i",*(matrix+i)+j);
		}
	}
}
//int matrix_comparator(int matrix, int *sym)
//precondition none
//poscondition looks if the matrix is symmetrical
int matrix_comparator (int matrix [][3]){
	int i,j,sym;
	sym=1;
	for(i=0;i<3&&sym==1;i++){
		for(j=0;j<3&&sym==1;j++){
			if(*(*(matrix+i)+j)!=*(*(matrix+j)+i)){
				sym=0;
			}
		}
	}
	return sym;
}



















