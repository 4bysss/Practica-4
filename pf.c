#include <stdio.h>
int addition (int,int);
int substraction (int,int);
int product (int,int);
int division (int,int);
int operate (int,int, int (*) (int,int)); 
int main(){
	char op;
	int x;
	int y;
	int result=0;
	printf("Give the number and the operator");
	scanf("%i,%i,%s",&x,&y,&op);
	switch(op){
	case '+':result=operate(x,y, addition); break;
	case '-':result=operate(x,y, substraction); break;
	case 'x':result=operate(x,y, product); break;
	case '/':result=operate(x,y, division); break;}
	printf("%i",result);
	return 0;}
int addition (int x, int y){
return(x+y);}
int substraction (int x, int y){
return(x-y);}
int product (int x, int y){
return(x*y);}
int division (int x, int y){
return(x/y);}
int operate (int x, int y, int (*funcion) (int,int)){
return ( funcion (x,y));}
