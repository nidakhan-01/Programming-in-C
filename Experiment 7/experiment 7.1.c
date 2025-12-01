/*Experiment 7: Structures and Union

7.1. Write a C program that uses functions to perform the following operations:

a. Reading a complex number.
b. Writing a complex number.
c. Addition and subtraction of two complex numbers
Note: represent complex number using a structure.*/
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex readComplex() {
    struct Complex c;
    printf("  Real part: ");
    scanf("%f", &c.real);
    printf("  Imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

int main() {
    struct Complex c1, c2, sum, diff;

    printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
    printf("\n---------------------------------\n");

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("\nEnter second complex number:\n");
    c2 = readComplex();

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;

    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference = %.2f + %.2fi\n", diff.real, diff.imag);

    return 0;
}