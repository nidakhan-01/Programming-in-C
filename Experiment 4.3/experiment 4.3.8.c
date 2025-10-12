/*Experiment:4 Loops*/
#include <stdio.h>

int main() 
{
		printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
	    printf("\n---------------------------------\n");
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n; j > i; j--)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}