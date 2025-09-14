/* Experiment 3:Conditional Statements:
Write a C program to check whether a number is even or odd*/
#include<stdio.h>
int main()
{
	printf("Name  - Nida Khan\nSAP ID  -  590028523\nCourse BCA\nBath-B6");
	printf("\n-----------------------------------------------\n");
	int x;
	printf("Enter a number");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("The number is even");
		
	}
	else
	{
		printf("The number is odd");
	}
	return 0;
}
