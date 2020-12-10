#include <stdio.h>
float calculate (float, float);

int main(){
	float res,vol,intensity;
	printf("Give the voltage and the resistance separated by a ','\n");
	scanf("%f,%f",&vol,&res);
	intensity=calculate(vol,res);
	printf("The intensity is %f",intensity);
	return 0;}

float calculate(float vol, float res ){
	float intensity;
	intensity=vol/res;
	return intensity;}
