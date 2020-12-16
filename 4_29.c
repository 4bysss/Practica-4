#include <stdio.h>
#define MAX 3
typedef struct data{
	char name [20];
	char surname[20];
	char ID[20];
	int sells [7];
}company;
void d_update(company week[]);
void t_sales(company week[]);
void b_seller(company week[]);
int main(){
	company week[3];
	d_update(week);
	t_sales(week);
	b_seller(week);
	return 0;
}
//void d_update(company week[]);
//precondition none
//postcondition gets the information of the eployers
void d_update (company week[]){
	int i,k;
	for(i=0;i<MAX;i++){
		printf("Employer %i",i+1);
		printf("Name:");
		fgets(week[i].name,20,stdin);
		printf("Surname:");
		fgets(week[i].surname,20,stdin);
		printf("ID:");
		fgets(week[i].ID,20,stdin);
		for(k=0;k<7;k++){
			printf("Day %i\n",k+1);
			scanf("%i",&(week[i].sells[k]));
		}
		getchar();
	}
}
//void t_sales(company week[]);
//precondition none
//postcondition calculates the total sales of the compaly in the week
void t_sales(company week[]){
	int i,k,total;
	total=0;
	for(i=0;i<MAX;i++){
		for(k=0;k<7;k++){
			total=week[i].sells[k]+total;
		}
	}
	printf("The total sales of the company %i\n",total);
}
//void b_seller(company week[]);
//precondition none
//postcondition calculates a prints the best 2 sellers
void b_seller(company week[]){
	int b_s1,b_s2,total,top1,top2,i,k;
	int w_sales[MAX];
	total=0;
	for(i=0;i<MAX;i++){
		total=0;
		for(k=0;k<7;k++){
			total=total+week[i].sells[k];
		}
		w_sales[i]=total;
	}
	b_s1=0;
	b_s2=0;
	top1=-1;
	top2=-1;
	for(i=0;i<MAX;i++){
		if(w_sales[i]>top1){
			top1=w_sales[i];
			b_s1=i;
		}
	}
	for(i=0;i<MAX;i++){
		if(i!=b_s1&&w_sales[i]>top2){
			top2=w_sales[i];
			b_s2=i;
		}
	}
	printf("The best seller is %s with a total of sales of %i\nThe seconde best seller is %s with a total of sales of %i",week[b_s1].name,w_sales[b_s1],week[b_s2].name,w_sales[b_s2]);
}






