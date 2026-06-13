#include<stdio.h>
void main()
{

    int a = 10;
    int *pr;
    pr = &a;
    int **pr2 = &pr;


    // printf("\nAddress of pr = %u",pr);
    // printf("\nAddress of pr2 = %u",pr2);
    printf("\nvalue of a = %d",a);
    printf("\nvalue of pr = %d",*pr);
    printf("\n value of pr = %d",**pr2);


    ++**pr2;
    a = a+ 5;
    ++*pr;

    printf("\nvalue of a = %d",*pr2);




    // printf("\nAddress of A = %u",&a);
    // printf("\nvalue  of a = %d",*(&a));

    // printf("\nvalue of PR = %u",pr);
    // printf("\nAddress of PR = %u",&pr);




    // printf("\nvalue of a = %d",a);
    // printf("\n address of a = %u",&a);
    // printf("\nAddress of pr = %u",pr);
    // printf("\nvalue of pr = %d",*pr);
    // --*pr;
    // printf("\nvalue of a = %d",a);

    // printf("Value of a = %d",a);
    // printf("\nAddress of a = %u",&a);
    // printf("\nAddress of b = %u",&b);


}

// pointer is a variable that holds the address of another variable
// pointer is used to access the value stored in another variable