#include <stdio.h>
#define N 3
int compare(int A[][N],int B[][N],int equal);
void reader (int c[][N]);
int main(){
	int A[N][N];
	int B[N][N];
	int equal=1;
	printf ("1\n");
	reader (A);
	printf("2\n");
	reader (B);
	equal=compare (A,B,equal);
	if (equal==0){
		printf("THEY ARE NO EQUAL");}
	else{
		printf("ARE EQUAL");}
	return 0;}

void reader (int c[][N]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf ("[%i] [%i]",i+1,j+1);
			scanf("%i",*(c+i)+j);}}
}
int compare(int A[][N],int B[][N],int equal){		
	int i,j;
	for(i=0;i<N&&equal==1;i++){
		for(j=0;j<N&&equal==1;j++){
			if (*(*(A+i)+j)!=*(*(B+i)+j)){equal=0;}
		}
	}
	return equal;
}


	


