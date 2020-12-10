#include<stdio.h>
#define MAX 20
int sum (int *array, int *max);
void reader (int *array ,int *max);

int main(){
	int max;
	int *array[MAX];
	int result;
	printf("How many numbers do you want to sum?");
	scanf("%i",&max);
	reader (*array,&max);
	result=sum(*array, &max);
	printf("The result of the sum is %i", result);
	return 0;}

//header void reader
//precondition max>0
//postcondition reads all the numbers that will be sum up later
void reader (int *array,int *max){
		int i;
		printf ("give me the numbers you want to sum up");
		for(i=0;i<*max;i++){
			scanf("%i",&array[i]);
		}
}

//header int sum (*int)
//precondition the number given must be >0
//postcondition recieves al the numbers that will be sum up a
int sum (int *array,int *maxx){
	int r;
	int i;
	r=0;
	for (i=0;i<*maxx;i++){
		r=array[i]+r;
	}
	return r;}
		
