#include <stdio.h>
#include <string.h>
#define MAX 3
typedef struct stachion {
	char station [50];
	int l_mounth[12];
}stattion;
void data_collector(stattion stt[]);
void most_less(stattion stt[],char *election);
void average_litters(stattion stt[],int *month);
int main(){
	stattion stt[MAX];
	int month;
	char election[50];
	printf("Give me the data of %i stations\n", MAX);
	data_collector(stt);
	printf("What station do you want to check?");
	fgets(election,50,stdin);
	most_less(stt,election);
	printf("Of what mounth (number of yhe mounth)");
	scanf("%i",&month);
	getchar();
	average_litters(stt,&month);
	return 0;
}
//data_collector(stattion stt[])
//precondition NONE
//postcondition: reads all the values of the stattion
void data_collector (stattion stt[]){
	int i,k;
	for(i=0;i<MAX;i++){
		printf("Name:");
		fgets(stt[i].station,50,stdin);
		for(k=0;k<12;k++){
			printf("Mounth %i\n",k+1);
			scanf("%i",&(stt[i].l_mounth[k]));
		}
		getchar();
	}
}
//void most_less (stattion stt[], char election[])
//precondition none
//postcondition: Tells the mounth where ir rained the most and the less of the selected station
void most_less(stattion stt[], char *election){
	int i,k,cuantity,found;
	found=1;
	printf("VALUES TEST [%i]",stt[0].l_mounth[2]);
	for(i=0;i<MAX&&found!=0;i++){
		if(strcmp((stt[i].station),election)==0){
			found=strcmp(stt[i].station,election);	
			printf("TEST[%i] of I value \n",i);
		}
	}
	cuantity=0;
	printf("TEST[%i]\n",cuantity);
	if(found==0){
		for (k=1;k<12;k++){
			if((stt[i-1].l_mounth[k-1])<=(stt[i-1].l_mounth[k])){
				cuantity=k;
				printf("TEST[%i]\n",cuantity);
			}
		}
		printf("The mounth %i is the mounth that rained the most with %i L/m^2\n",cuantity+1,stt[i-1].l_mounth[cuantity]);
		cuantity=0;
		printf("TEST[%i]\n",cuantity);
		for (k=0;k<12;k++){
			if(stt[i-1].l_mounth[k-1]>=stt[i-1].l_mounth[k]){
				cuantity=k;
			}
		}
		printf("The mounth %i is the mounth that rained less with %i L/m^2\n",cuantity+1,stt[i-1].l_mounth[cuantity]);
	}
	else{
		printf("Station not found");
	}
}
//void average_litters (stattion stt[], int *month);
//precondition month>=12
//postcondition tells the average of the months given
void average_litters(stattion stt[], int *month){
	int i,sum,average;
	sum=0;
	for (i=0;i<MAX;i++){
		sum=sum+stt[i].l_mounth[*month-1];
	}
	average=sum/MAX;
	printf("The average rain in the mounth %i is %i",*month,average);
}






