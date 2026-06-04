#include<stdio.h>

// with return type without argument

int mul()
{
    int a,b,multiply;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    // return a*b;
    multiply = a*b;

    return multiply;

}


void main()
{


    int ans = mul();
    printf("Multiplication is %d",ans);
}