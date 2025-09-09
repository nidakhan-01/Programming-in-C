/*Experiment 2: Operators
1.  Write a C program to calculate the area and perimeter of a rectangle based on its length and width. */

#include<stdio.h>
int main()
{
		printf("Name  - Nida Khan\nSAP ID  -  590028523\nCourse BCA\nBath-B6");
	printf("\n-----------------------------------------------\n");
	
	float length,width,perimeter=0,area=0;
	printf("Enter length");
	scanf("%f",&length);
	printf("Enter width");
	scanf("%f",&width);
	perimeter=2*(length+width);
	area=length*width;
	
	printf("Area of Rectangle =%.2f\n", area);
	printf("Perimeter of rectangle=%.2f\n", perimeter);
	return 0;
}
	

