#include <stdio.h>
int array[10];
int i;
int main(){
	printf("give me 10 numbers to printf");
	for(i=0;i<10;i++){
		scanf("%i",&array[i]);
	}
	for(i=0;i<10;i++){
		printf("%i\n",array[i]);
	}
return 0;}
	
	
