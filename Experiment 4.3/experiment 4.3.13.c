/*Experiment:4 Loops*/
#include <stdio.h>
int main()
 {
 	printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
	printf("\n---------------------------------\n");
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf(" ");
        }
        for(j = 5; j >= i + 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}