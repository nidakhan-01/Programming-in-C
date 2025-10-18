/*Experiment 6:Array
6.2. Write a program to read a list of integers and store it in a single dimensional array.
Write a C program to count and display positive, negative, odd, and even numbers in an array.*/
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

    int pos = 0, neg = 0, even = 0, odd = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
            pos++;
        else
            neg++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
 