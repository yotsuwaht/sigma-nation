#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

char* arithmetic(){
	char operations[100] = "+-*/";
	int firstValue = rand() % 9;
	int secondValue = rand() % 9;
	char operation = operations[rand() % 3];
	char* buffer = malloc(100);
	int length = sprintf(buffer, "%d%c%d", firstValue, operation, secondValue);
	return buffer;
};

char main(){
	printf("%s", arithmetic());
};
