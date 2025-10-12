/*Experiment:4 Loops*/
#include<stdio.h>
int main()
{
	
	printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
	printf("\n---------------------------------\n");
    int i, j, num = 1;

    for (i = 1; i <= 5; i++)
	 {
    for (j = 1; j <= i; j++)
	 {
        printf("%d ", num);
        num++;
    }
    printf("\n");
}
}