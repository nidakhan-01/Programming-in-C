/*Experiment 5:Variable and Scope of Variable
5.2. Declare a local variable inside a function and try to access it outside the function. 
Compare this with accessing the global variable from within the function.*/
#include <stdio.h>
int g = 10;

void test()
{
    int x = 5;
    printf("Inside test(): x = %d\n", x);
    printf("Inside test(): g = %d\n", g);
}

int main()
{
    printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
    printf("\n---------------------------------\n");

    test();
    printf("Trying to access x outside function gives error\n");
    printf("Accessing global g in main(): g = %d\n", g);
    return 0;
}