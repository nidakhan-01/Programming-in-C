/*Experiment 6:Array
6.1. Write a program to read a list of integers and store it in a single dimensional array.
 Write a C program to print the second largest integer in a list of integers.*/
#include <stdio.h>
int main()
{
    printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
    printf("\n---------------------------------\n");

    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first = arr[0], second = -99999;
    for(i = 1; i < n; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }

    printf("Second largest number = %d\n", second);
    return 0;
}