/*Experiment 3:Conditional Statements
Write a C program to check if three points (x1,y1),(x2,y2),and(x3,y3) are collinear or not.*/
#include<stdio.h>
int main()
{
	printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
	printf("\n---------------------------------\n");
	float x1,y1,x2,y2,x3,y3,area=0;
	printf("Enter coordinates of first point (x1,y1):\n ");
	scanf("%f %f",&x1,&y1);
    printf("Enter coordinates of second point (x2,y2):\n ");
	scanf("%f %f",&x2,&y2);
    printf("Enter coordinates of third point (x3,y3):\n ");
	scanf("%f %f",&x3,&y3);
	area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
	if(area==0)
	{
		printf("Points are collinear\n");
	}
	else
	{
		printf("Points are not collinear\n");
	}
	return 0;


}