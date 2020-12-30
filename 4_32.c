#include <stdio.h>
#include <string.h>
#define MAX 3
typedef struct data{
	char name[20];
	char s_name[20];
	char ID[20];
	double salary;
	double h_w[5];
}workers;
void d_collector(workers worker[]);
void s_calculator(workers worker[]);
int main(){
	workers worker [MAX];
	d_collector (worker);
	s_calculator(worker);
	return 0;
}
//void d_collector(workers worker[]);
//precondition none
//postcondition: Collects the data of the workers;
void d_collector(workers worker[]){
	int i,j;
	for(i=0;i<MAX;i++){
		printf("Worker %i\n", i+1);
		printf("Name:");
		fgets(worker[i].name,20,stdin);
		worker[i].name[(strlen(worker[i].name)-1)]= '\0';
		printf("Surname:");
		fgets(worker[i].s_name,20,stdin);
		worker[i].s_name[strlen(worker[i].s_name)-1]= '\0';
		printf("ID:");
		fgets(worker[i].ID,20,stdin);
		worker[i].ID[strlen(worker[i].ID)-1]= '\0';
		printf("Salary/Hours");
		scanf("%lf",&(worker[i].salary));
		getchar();
		printf("Hours Worked\n");
		for(j=0;j<5;j++){
			printf("Day %i",j+1);
			scanf("%lf",&(worker[i].h_w[j]));
		}
		getchar();
	}
}
//void s_calculator(workers worker[i]);
//precondition none
//postcondition calculates the salary of their workers an prints those who 
void s_calculator(workers worker[]){
	int i,j,k;
	double week;
	double h_t[MAX];
	for(i=0;i<MAX;i++){
		week=0;
		for(j=0;j<5;j++){
			week=worker[i].h_w[j]+week;
		}
		h_t[i]=week;
	}
	for(i=0;i<MAX;i++){
		if(h_t[i]>35){
			printf("The salary per week of %s %s is %lf\n",worker[i].name,worker[i].s_name,(35*worker[i].salary)+((h_t[i]-35)*(worker[i].salary*1.1)));
		}
		else{
			printf("The salary per week of %s %s is %lf\n",worker[i].name, worker[i].s_name,h_t[i]*worker[i].salary);
		}
	}
	printf("The employers who worked less than 35 hours are:\n");
	for(i=0;i<MAX;i++){
		if(h_t[i]<35){
			printf("%s %s\n",worker[i].name,worker[i].s_name);
		}
	}
}



















