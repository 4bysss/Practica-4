#include <stdio.h>
#include <string.h>
#define MAX 3
typedef struct data1{
	char name [20];
	char s_name[20];
	char ID[9];
	int age;
	int s_day[7];
}employee;
void d_collector(employee *emp);
void day_more_sales(employee *emp, int *day);
char * lower_employee(employee emp[]);
int total_sales (employee *emp);
int equal_name(employee *emp);
int main(){
	int day,e_name,t_sales;
	employee emp[MAX];
	char young[20];
	day=0;
	printf("ITS TIME TO STORE SOME DATA OF YOU COMPANY DON'T YA?!\n");
	d_collector(emp);
	day_more_sales(emp,&day);
	switch(day){
		case 0: printf("The day with more sales is Monday\n");
			break;
		case 1: printf("The day with more sales is Tuesday\n");
			break;
		case 2: printf("The day with more sales is Wednesday\n");
			break;
		case 3: printf("The day with more sales is Thursday\n");
			break;
		case 4: printf("The day with more sales is Friday\n");
			break;
		case 5: printf("The day with more sales is Saturday\n");
			break;
		case 6: printf("The day with more sales is Sunday\n");
			break;
	}
	printf("I will tell you the youngest employee\n");
	strcpy(young,lower_employee(emp));
	printf("The youngest employee is %s\n",young);
	t_sales=total_sales(emp);
	printf("The total sales of the company are %i\n", t_sales);
	e_name=equal_name(emp);
	if(e_name==1){
		printf("The are two employees with the same name");
	}
	else{
		printf("There arent any employees with the same name");
	}
	return 0;
}
//void d_collector(employee *emp)
//precondition none
//postcondition: Stores the data of all the employees
void d_collector(employee *emp){
	int i,j;
	for(i=0;i<MAX;i++){
		printf("Employee %i\n",i+1);
		printf("Name:");
		fgets(emp[i].name,20,stdin);
		emp[i].name[strlen(emp[i].name)-1]= '\0';
		printf("Surname:");
		fgets(emp[i].s_name,20,stdin);
		emp[i].s_name[strlen(emp[i].s_name)-1]='\0';
		printf("ID:");
		fgets(emp[i].ID,9,stdin);
		emp[i].ID[strlen(emp[i].ID)-1]= '\0';
		printf("Age:");
		scanf("%i",&(emp[i].age));
		getchar();
		printf("SALES\n ----------------------\n");
		for(j=0;j<7;j++){
			printf("Day %i",j+1);
			scanf("%i",&(emp[i].s_day[j]));
			getchar();
		}
	}
}
//void day_more_sales(employee *emp, int *day)
//precondition none
//postcondition The function accepts the information of an employee and returns the weekday in which the
//employees have made more sales.
void day_more_sales(employee *emp, int *day){
	int i,j,equal;
	char selection[20];
	equal=-1;
	printf("Give me the name of a employee to search it\n");
	fgets(selection,20,stdin);
	selection[strlen(selection)-1]='\0';
	for(i=0;i<MAX&&equal!=0;i++){
		equal=strcmp(selection,emp[i].name);
	}
	if(equal==0){
		for(j=1;j<7;j++){
			if(emp[i-1].s_day[j]>emp[i-1].s_day[j-1]){
				*day=j;
			}
		}
	}
	else{
		printf("Employee not found");
	}
}
//char * lower_employee(employee emp[]);
//precondition none
//postcondition tells the youngest employee
char * lower_employee(employee emp[]){
	int i,min,youngest;
	youngest=0;
	min=emp[0].age;
	for(i=1;i<MAX;i++){
		if(emp[i].age<min){
			youngest=i;
			min=emp[i].age;
		}
	}
	return emp[youngest].name;
}
//int total_sales(employee *emp)
//precondition none
//postcondition returns the total sales of the company
int total_sales(employee *emp){
	int i,j,t_s;
	t_s=0;
	for(i=0;i<MAX;i++){
		for(j=0;j<7;j++){
			t_s=emp[i].s_day[j]+t_s;
		}
	}
	return t_s;
}
//int equal_name(employee *emp);
//precondition none
//postcondition returns a 1 if there are at least 2 names equal and a 0 if there arent
int equal_name(employee *emp){
	int i,j,found;
	found=0;
	for(i=0;i<MAX&&found==0;i++){
		for(j=i+1;j<MAX&&found==0;j++){
			if(strcmp(emp[i].name,emp[j].name)==0){
				found=1;
			}
		}
	}
	return found;
}













