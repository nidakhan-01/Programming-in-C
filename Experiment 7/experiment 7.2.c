/*7.2. Write a C program to compute the monthly pay of 100 employees using each employee=s name, basic pay. The DA is computed as 52% of the basic pay.
 Gross-salary (basic pay + DA). Print the employees name and gross salary.*/
 #include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float gross;
};

int main() {
    struct Employee emp[100];
    int i;

    printf("Name -Nida Khan\nSAP id -590028523\nCourse BCA\nBatch-06");
    printf("\n---------------------------------\n");

    for(i = 0; i < 100; i++) {
        printf("\nEnter employee %d name: ", i + 1);
        scanf("%s", emp[i].name);

        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basic);

        emp[i].gross = emp[i].basic + (0.52 * emp[i].basic);
    }

    printf("\n========= Employee Gross Salary =========\n");

    for(i = 0; i < 100; i++) {
        printf("Name: %s | Gross Salary: %.2f\n", emp[i].name, emp[i].gross);
    }

    return 0;
}