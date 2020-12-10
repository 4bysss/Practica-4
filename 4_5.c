#include <stdio.h>
#define MAX 10
void read_array (int *array);
void maximum(int *max, int *array);
int main (){
	int array[MAX];
	int max;
	printf("GIVE ME NUMBEEEEEEEEEEEEERS!");
	read_array (array);
	max=array[0];
	maximum(&max, array);
	printf ("THE MAX NUMBER OF YOUR ARRAYYYY IIIIISS %i", max);
	return 0;}

//void read_array (int *array)
//precondition: Only integer numbers allowed
//postcondition: Reads all the number of the array
void read_array (int *array){
	int i;
	printf("bucle 1 operativo");
	for (i=0;i<MAX;i++){
		scanf("%i",&array[i]);}
}
//void maximum (int *max, int *array)
//precondition:none
//postcondition:Gives the max number
void maximum (int *max, int *array){
	int i;
	printf("bucle 2 operativo");
	for (i=0;i<MAX;i++){
		if (*max<array[i]){
				*max=array[i];}
			}
}


