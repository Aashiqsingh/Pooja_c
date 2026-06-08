#include<stdio.h>
#include<stdbool.h>
int isEven(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}


void main()
{
    int num,ans;
    bool isActive = true;
    printf("Enter a number :");
    scanf("%d",&num);


    ans = isEven(num);
    printf("%s",ans == 1 ? "Even" : "odd");
}