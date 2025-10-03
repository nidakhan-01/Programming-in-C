/*Experiment 4:Loops
Write a program to print the multiplication table of the number entered by the user. It should be in the correct formatting. Num * 1 = Num*/
#include<stdio.h>
int main()
{
	printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
	printf("\n---------------------------------\n");
	int i,n;
	printf("Enter a Number\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d =%d\n ",n,i,n*i);
	}
}