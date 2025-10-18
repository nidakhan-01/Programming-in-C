/*Experiment 6:Array
6.4. Write a Program that reads two matrices A (m x n) and B (p x q) and computes the product A and B.
Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. 
Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility.*/
#include <stdio.h>

int main()
 {
    printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
    printf("\n---------------------------------\n");

    int m, n, p, q;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);
    int A[m][n];
    printf("Enter elements of Matrix A:\n");
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);
    int B[p][q];
    printf("Enter elements of Matrix B:\n");
    for(int i=0; i<p; i++)
        for(int j=0; j<q; j++)
            scanf("%d", &B[i][j]);

    if(n != p){
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int C[m][q];
    for(int i=0; i<m; i++)
        for(int j=0; j<q; j++){
            C[i][j] = 0;
            for(int k=0; k<n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Matrix A:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    printf("Matrix B:\n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    printf("Resultant Matrix (A x B):\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}