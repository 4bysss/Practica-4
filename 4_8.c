#include <stdio.h>
#define MAX 10
void array_reader (int *array);
void unique_finder (int *array);

int main(){
	int array[MAX];
	printf("give me 10 numbers and I will find the unique ones");
	array_reader (array);
	unique_finder (array);
	return 0;}
//void array_reader (int *array)
//Precondition only integer numbers allowed
//postcondition reads all the values given to the array
void array_reader(int *array){
	int i;
	for (i=0;i<MAX;i++){
		scanf("%i",&array[i]);
	}
}
//void unique_finder (int *array)
//precondition none
//postcondition finds the unique numbers in the array
void unique_finder (int *array){
	int pos,i,found,total_found;
	total_found=0;
	for(pos=0;pos<MAX;pos++){
		found=0;
		for (i=0;i<MAX;i++){
			if(array[pos]==array[i]){
				found++;
			}
		}
		if(found==1){
			printf("The number %i is unique\n", array[pos]);
			total_found++;
		}
	}
	if(total_found==0){
		printf("Any of those numbers is unique");
	}
}



