#include <stdio.h>
#include <string.h>
#define MAX 3
typedef struct data_1{
	char subject[50];
	int trimester[3];
}subject_data;
typedef struct data_2{
	char name [20];
	char s_name[20];
	char ID[20];
	int age;
	subject_data subs[7];
}student;
void d_updater(student al[]);
void global_grade(student al[]);
void higher_grade(char subj[], student al[]);
int main(){
	int i,j;
	student al[3];
	char subj[20];
	d_updater(al);
	global_grade(al);
	printf("Give me the name of a subject and I will tell you the best grade");
	fgets(subj,20,stdin);
	higher_grade(subj,al);
	return 0;
}
void d_updater(student al[]){
	int i,j,k;
	for(i=0;i<7;i++){
		printf("Subjet %i",i+1);
		fgets(al[0].subs[i].subject,20,stdin);
		for(j=0;j<3;j++){
			strcpy(al[j].subs[i].subject,al[0].subs[i].subject);
		}

	}
	for(i=0;i<3;i++){
		printf("Student %i",i+1);
		printf("Name:");
		fgets(al[i].name,20,stdin);
		printf("Surname:");
		fgets(al[i].s_name,20,stdin);
		printf("ID:");
		fgets(al[i].ID,20,stdin);
		printf("Age:");
		scanf("%i",&(al[i].age));
		getchar();
		for(j=0;j<7;j++){
			printf("%sGrades:\n",al[i].subs[j].subject);
			for(k=0;k<3;k++){
				scanf("%i",&(al[i].subs[j].trimester[k]));
			}
			getchar();
		}	
	}
}
void global_grade(student al[]){
	int i,j,k,found,location;
	char st_name[20];
	found=1;
	printf("give me Name of a student and I will give you his/her grades\n");
	fgets(st_name,20,stdin);
	for(i=0;i<3&&found!=0;i++){
		found=strcmp(st_name,al[i].name);
	}
	if(found!=0){
		printf("student not found");
	}
	else{
		printf("%s",al[i-1].name);
		for(j=0;j<7;j++){
			printf("%s",al[i-1].subs[j].subject);
			for(k=0;k<3;k++){
				printf("%i\n",al[i-1].subs[j].trimester[k]);
			}
		}
	}
}

void higher_grade(char subj[],student al[]){
	int i,j,k,b_g,found,st_name;
	found=1;
	b_g=0;
	for(i=0;i<3&&found!=0;i++){
		found=strcmp(subj,al[0].subs[i].subject);
	}
	if(found!=0){
		printf("Subject not found");
	}
	else{
		for(k=0;k<3;k++){
			if(al[k].subs[i-1].trimester[0]>b_g){
				b_g=al[k].subs[i-1].trimester[0];
				st_name=k;
			}
		}
	}
	printf("The student with the best grade in that subject is %sGrade:%i",al[st_name].name,b_g);
}
