/*Experiment 1: Installation Environment setup and starting with C language. 
4.Write a C program to perform 4 arithmetic operations on two variables.*/ 
#include <stdio.h>

int main()
{
    int a, b, sum = 0, diff = 0, mul = 0;
    float div = 0.0;

    printf("Name  - Nida Khan\nSAP ID  - 590028523\nCourse - BCA\nBatch - B6\n");
    printf("-----------------------------------------------\n");

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    mul = a * b;
    div = (float)a / b;

    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", diff);
    printf("Multiplication: %d\n", mul);
    printf("Division: %.2f\n", div);

    return 0;
}

