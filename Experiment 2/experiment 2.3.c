/* Experiment 2: Operators
2. Write a C program to calculate compound intrest.*/

#include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, time, CI, amount = 0;

    printf("Name - Nida Khan\nSAP ID - 590028523\nCourse - BCA\nBatch - B6\n\n");
    printf("\n----------------------------------------------------------------\n");

    printf("Enter Principal Amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%lf", &rate);

    printf("Enter the Time in Years: ");
    scanf("%lf", &time);

    // Calculate Compound Amount and CI
    amount = principal * pow((1 + rate / 100), time);
    CI = amount - principal;

    printf("The Compound interest is: %.2lf\n", CI);

    return 0;
}
