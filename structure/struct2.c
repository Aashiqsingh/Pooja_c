#include <stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
    char designation[20];
};

void main()
{
    struct employee e[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Employee Id:");
        scanf("%d", &e[1].id);
        printf("Enter Employee Name:");
        scanf("%s", e[1].name);
        printf("Enter Employee Salary:");
        scanf("%f", &e[1].salary);
        printf("Enter Employee Designation:");
        scanf("%s", e[1].designation);
    }

    printf("\n\nEmployee Details:\n");
    printf("Id \t Name \t Salary \t Designation\n");

    for(int i=0;i<5;i++)
    {
        printf("%d \t %s \t %f \t %s\n", e[i].id, e[i].name, e[i].salary, e[i].designation);

    }
}