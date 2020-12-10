#include <stdio.h>
#define MAX 20
void array_reader (float *array);
void max_finder (float *array, float *max);
void divisor (float *array, float *array2, float *max); 
int main(){
	float array[MAX];
	float array2[MAX];
	float max;
	int i;
	printf("Give me 20 numbers");
	array_reader (array);
	max=array[0];
	max_finder (array, &max);
	divisor(array,array2,&max);
	for(i=0;i<MAX;i++){ 
		printf("The oritginal number is %f and the normaliced %f\n", array[i],array2[i]);}
	return 0;}
//void array_reader (float *array)
//precondition: the number shoud be >0
//postcondition: reads all the given numbers
void array_reader (float *array){
	int i;
	for(i=0;i<MAX;i++){
		scanf("%f",&array[i]);
	}
}
//void max_finder (float *array, float *max)
//precondition:none
//postcondition: finds the biggest number of the array
void max_finder (float *array, float *max){
	int i;
	for(i=0;i<MAX;i++){
		if(*max<array[i]){
			*max=array[i];
		}
	}
}
//void divisor (float *array, float array2, float *max)
//precondition none
//postcondition:divides each number of the array by the biggest number of it
//and stores it in a new array calle array2
void divisor (float *array, float *array2, float *max){
	int i;
	for(i=0;i<MAX;i++){
		array2[i]=array[i] / *max;
	}
}




