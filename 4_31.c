#include <stdio.h>
#include <string.h>
#define MAX 3
typedef struct data_1{
	char subject[50];
	int trimester[3];
}subject_data
typedef struct data_2{
	char name [20];
	char s_name[20];
	char ID[20];
	int age;
	subject_data subs[7];
}student



