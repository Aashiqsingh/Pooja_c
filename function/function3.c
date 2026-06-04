#include<stdio.h>

char test()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);


    return num;
}

void main()
{
    int ans;
    ans = test();
    printf("The number entered is: %c", ans);
}



// char arr [6] = {'p','o','o','j','a'};