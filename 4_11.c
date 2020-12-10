#include <stdio.h>
void copier (int matrix[][3],int matrix2[][3]);
void reader (int matrix[][3]);
int main(){
	int i,j;
	int matrix [3][3];
	int matrix2 [3][3]={{0},{0}};
	reader (matrix);
	copier(matrix,matrix2);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%i  ",*(*(matrix+i)+j));}
		printf("\n");
	}
	return 0;}
void reader (int matrix[][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("give me the value %i %i",i+1,j+1);
			scanf("%i",*(matrix+i)+j);
		}
	}
}
void copier (int matrix[][3],int matrix2[][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			*(*(matrix2+i)+j)=*(*(matrix+i)+j);
		}
	}
}
