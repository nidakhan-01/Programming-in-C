/*Experiment 5:Variable and Scope of Variable
5.3. Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.*/
#include <stdio.h>
int main()
{
    printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
    printf("\n---------------------------------\n");

    int a = 10;
    printf("Outside block: a = %d\n", a);

    {
        int b = 20;
        printf("Inside block: a = %d, b = %d\n", a, b);
    }

    printf("Outside block again: a = %d\n", a);
    printf("Trying to access b outside block gives error\n");
    return 0;
}
