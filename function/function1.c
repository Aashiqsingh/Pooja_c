#include<stdio.h>
void prime(int val)
{
    int i,flag = 0;
    for(i=2;i<val;i++)
    {
        if(val%i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
}
void main()
{

    int num;
    printf("Enter a number:");
    scanf("%d",&num);
        
    prime(num);
}
