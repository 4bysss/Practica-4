#include <stdio.h>
#define MAX 10
void array_reader (int *array);
void array_freq (int *array);

int main(){
	int array[MAX];
	printf("Give me 10 numbers");
	array_reader(array);
	array_freq (array);
	return 0;}
//void array_reader (int *array)
//precondition 0<n<11
//postcondition reads the numbersof the array
void array_reader (int *array){
	int i;
	for(i=0;i<MAX;i++){
		scanf("%i",&array[i]);
	}
}
//void array_freq (int *array)
//precondition none
//postcondition counts and prints the freq of each number of the array
void array_freq (int *array){
	int i;
	int num;
	int freq;
	for(num=1;num<=MAX;num++){
		freq=0;
		for(i=0;i<MAX;i++){
			if(num==array[i]){
				freq++;
			}
		}
	if(freq!=0){	
		printf("The %i appears %i\n", num, freq);
	}
	}
}






