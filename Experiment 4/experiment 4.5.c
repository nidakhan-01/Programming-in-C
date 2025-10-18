/*Experiment 4:Loops
4.5. Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways.
 Write a program to print all such numbers up to a reasonable limit.*/

#include <stdio.h>
int main() 
{
	printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
	printf("\n---------------------------------\n");
    int a, b, c, d;
    int n1, n2;

    printf("Ramanujan numbers up to 10000\n");

    for(a = 1; a <= 100; a++) 
	{
        for(b = a + 1; b <= 100; b++) 
		{
            n1 = a*a*a + b*b*b;
            for(c = a + 1; c <= 100; c++)
			 {
                for(d = c + 1; d <= 100; d++)
				 {
                    n2 = c*c*c + d*d*d;
                    if(n1 == n2 && n1 <= 10000)
                    {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", n1, a, b, c, d);
                }
            }
        }
    }

    return 0;
}
}