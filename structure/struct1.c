#include<stdio.h>
#include<string.h>
struct students{
    int roll;
    char name[20];
    int age;
    float per;
};

int main()
{
    struct students s1;
    s1.roll = 121;
    strcpy(s1.name,"pooja");
    s1.age = 20;
    s1.per = 74.45;


    struct students s2;
    s2.roll = 122;
    strcpy(s2.name,"diya");
    s2.age = 21;
    s2.per = 80.45;




    printf("Stundents details :\n");
    printf("Roll no = %d",s1.roll);
    printf("\nName = %s",s1.name);
    printf("\nAge = %d",s1.age);
    printf("\nPercentage = %f",s1.per);


    printf("\n\nStudents details :\n");
    printf("Roll no = %d",s2.roll);
    printf("\nName = %s",s2.name);
    printf("\nAge = %d",s2.age);
    printf("\nPercentage = %f",s2.per);
}

