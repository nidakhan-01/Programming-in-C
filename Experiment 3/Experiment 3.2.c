 /*Experiment 3: Conditional Statements
Write a C program to check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral,
 right angle, or scalene. Take sides of the triangle as input from a user.*/
 #include <stdio.h>
#include <math.h>
int main(void) {
	printf("Name  - Nida Khan\nSAP ID  -  590028523\nCourse BCA\nBath-B6");
	printf("\n-----------------------------------------------\n");
    int a,b,c, sum=0;
    printf("Enter the values for a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    int h,perpendicular,base;
    if((a>b)&&(a>c))
    {
        h =a;
        perpendicular = b;
        base = c;
    }
     else if((b>a)&&(b>c))
    {
        h =b;
        perpendicular = a;
        base = c;
    }
    else
    {
        h =c;
        perpendicular = a;
        base = b;
    }
    if(((a+b)>c)||((b+c)>a)||((a+c)>b))
    {
         if((a==b)&&(b==c))
        {
            printf("Equilateral");
        }
        else if((a==b)||(b==c)||a==c)
        {
            printf("Isosceles");
        }
        else if((h*h)==(perpendicular*perpendicular)+(base*base))
        {
             printf("Right Angled traingle");
        }
        else
        {
            printf("Scalene");
        }

    }
    return 0;
}
