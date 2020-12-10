#include <stdio.h>
#include <string.h>
#define max 3
typedef struct person {
	char Name[50];
	char Surname[50];
	char ID[10];
	int age;
}people;
int search_person(people *v_p,char *id);
void data_uploader(people *v_p);
int main(){
	people v_p[max];
	char id[10];
	int agee;
	printf("Give me the data of 3 people\n");
	data_uploader(v_p);
	printf("Give me a ID and I will tell you de age of that person\n");
	fgets(id,10,stdin);
	agee=search_person(v_p,id);
	if(agee==0){
		printf("The ID you introduced is not in the data base");
	}
	else{
		printf("The age of the person selected is %i",agee);
	}
	return 0;}
void data_uploader (people *v_p){
	int i;
	for(i=0;i<max;i++){
		fflush(stdout);
		printf("Person %i\n",i+1);
		printf("Name:");
		fgets(v_p[i].Name,50,stdin);
		printf("Surname:");
		fgets(v_p[i].Surname,50,stdin);
		printf("ID:");
		fgets(v_p[i].ID,50,stdin);
		printf("Age:");
		scanf("%i",&(v_p[i].age));
		getchar();
	}
}
int search_person(people *v_p,char *id){
	int i,age;
	age=0;
	for(i=0;i<max;i++){
		if(strcmp(id,v_p[i].ID)==0){
			age=v_p[i].age;
		}
	}
	return age;
}
		


	

