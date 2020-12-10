#include <stdio.h>
void array_comparator (int *array);

int main (){
	int array[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	printf("Try if any number(0 will exit)");
	array_comparator (array);
	return 0;}
//void array_comparator (int *array)
//precondition only int values
//postcondition searchs if the given number is in the array
void array_comparator (int *array){
	int num;
	int i;
	int found;
	do{
		found=0;
		scanf("%i",&num);
		if(num!=0){
			for(i=0;i<15;i++){
				if(num==array[i]){
					printf("The number you wrote is in the %i of the array",i);
					found=1;
				}
			}
		}
		if (found==0){
			printf("Number not found in the array");
		}
	}while(num!=0);
}	
