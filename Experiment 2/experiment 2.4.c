/*Experiment 2:Operators
4. Write a C program to find the roots of Quadratic Equations*/

 #include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, root1, root2;
    printf("Name  - Nida Khan\nSAP ID  -  590028523\nCourse BCA\nBath-B6");
	printf("\n-----------------------------------------------\n");

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    printf("Root1 = %.2lf\n", root1);
    printf("Root2 = %.2lf\n", root2);

    return 0;
}
