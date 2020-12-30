#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	char myString[20];
	fgets(myString, 20, stdin);
	myString[strlen(myString)-1] = '\0';
	printf("Your string: %s Wohooo!\n", myString);
	return 0;
}
