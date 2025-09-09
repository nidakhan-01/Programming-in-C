/* Experiment 2: Operators
2. Write a C program to convert temperature from celcius to Fahrenhiet using the formula F=(C*9/5)+32.*/

#include<stdio.h>
int main()
{
	printf("Name  - Nida Khan\nSAP ID  -  590028523\nCourse BCA\nBath-B6");
	printf("\n-----------------------------------------------\n");
	float C,F=0;
	printf("Enter Temperature in Celcius");
	scanf("%f",&C);
	
	F=(C*9/5)+32;
	
	printf("The temperature in Fahrenhiet is: %.2f\n",F);
	return 0;
}
