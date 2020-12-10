#include <stdio.h>
#define MAX 20
void array_reader (float *array);
void max_finder (float *array, float *max);
void divider (float *array, float *max);

int main(){
	float max;
	float array [MAX];
	int i;
	printf("Give me 20 numbers");
	array_reader (array);
	max=array[0];
	max_finder(array, &max);
	divider (array, &max);
	for (i=0;i<MAX;i++){
		printf ("%f\n",array[i]);}
	return 0;}
//void array_reader (int *array)
//precondition: positive numbers
//postcondition, reads your fuckung numbers
void array_reader (float *array){
	int i;
	for (i=0;i<MAX;i++){
		scanf("%f",&array[i]);}
}
//void max_finder (float *array, float *max)
//precondition none
//postcondition:gives the max number
void max_finder(float *array,float *max){
	int i;
	for(i=0;i<MAX;i++){
		if (*max<array[i]){
			*max=array[i];}
	}
		printf("el divisor es %f\n",*max);
}
//void divisor (*float array; float array *max)
//precondition none
//Postcondition divides each number of the array
void divider (float *array, float *max){
	int i;
	for (i=0;i<MAX;i++){
		array[i]=array[i] / *max;}
}


