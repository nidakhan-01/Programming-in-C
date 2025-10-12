/*Experiment:4 Loops*/
#include <stdio.h>

int main() 
{
	printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
	printf("\n---------------------------------\n");
    int i,j,n = 5;
    for ( i = 0; i < n; i++) 
	{
    for (int j = 0; j < i; j++)
    {
    printf(" ");
    }
    for (int j = 1; j <= n - i; j++)
    {
     printf("%d", j);
    }
        printf("\n");
    }
    return 0;
}