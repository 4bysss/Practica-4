#include <stdio.h>
#include <math.h>
#define MAX 10
float average_calculator (float *array, int *N);
float sum_calculator (float *array, float *average, int *N);
float deviation_calculator (float *sum, int *N);
void array_reader (float *array,int *N);

int main(){
	float array[MAX];
	int N;
	float average=0;
	float sum=0;
	float deviation=0;
	printf("How many individuals are in the population?\n");
	scanf("%i",&N);
	printf("Ok! Now, may you give the value of each individual?\n");
	array_reader(array,&N);
	average=average_calculator(array,&N);
	sum=sum_calculator(array,&average,&N);
	deviation=deviation_calculator(&sum,&N);
	printf("The standart deviation is %f",deviation);
	return 0;
}
//void array_reader (gloat *array, int *N)
//precondition Max 20 numbers
//postcondition read all the numbers of the array
void array_reader(float *array,int *N){
	int i;
	for(i=0;i<*N;i++){
		scanf("%f",&array[i]);
	}
}
//float average_calculator (float *array, int *N)
//precondition N>0
//postcondition makes the average of the array
float average_calculator (float *array, int *N){
	int i;
	float sumatory=0;
	float result;
	for(i=0;i<*N;i++){
		sumatory=sumatory+array[i];
	}
	result=sumatory/ *N;
	return result;
}
//float sum_calculator (float *array,float *average, int *N)
//precondition none
//postcondition does the sumatory of (x-average)^2
float sum_calculator (float *array, float *average, int *N){
	float sumatory=0;
	int i;
	for(i=0;i<*N;i++){
		sumatory=sumatory+pow((array[i]-*average),2);
	}
	return sumatory;
}
//deviation_calculator(float *sum,int *N)
//preocndition none
//postcondition calculates the desviation
float deviation_calculator(float *sum, int *N){
	float result;
	result=sqrt(*sum / *N);
	return result;
}

