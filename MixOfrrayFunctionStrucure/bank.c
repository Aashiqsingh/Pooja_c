#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
struct bank{
    int customerId;
    char name[20];
    int bal;
}c[SIZE];

void create();
void display();
void deposit();
void withdraw();


void main()
{

    int flag = 0,choice;
    while(flag == 0)
    {
        printf("\n1 -- CREATE");
        printf("\n2 -- DISPLAY");
        printf("\n3 -- DEPOSIT");
        printf("\n4 -- WITHDRAW");
        printf("\n5 -- EXIT");
        printf("\nEnter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: create();
                    break;

            case 2: display();
                    break;

            case 3: deposit();
                    break;

            case 4: withdraw();
                    break;

            case 5: flag = 1;
                    exit(0);
                    break;

            default: printf("Invalid choice...");
        }
    }


}


void create()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter [%d] Customer Id",i+1);
        scanf("%d",&c[i].customerId);
        printf("Enter [%d] Customer Name :",i+1);
        scanf("%s",c[i].name);
        c[i].bal = 20000;
    }
}

void display()
{
    printf("\n\nDisplay All Customers\n");
    printf("CustomerId \t Customer Name \t Balance");
    for(int i=0;i<SIZE;i++)
    {
        printf("\n%d\t\t%s\t\t%d",c[i].customerId,c[i].name,c[i].bal);
    }
}

void deposit()
{
    int id,flag=0;
    printf("Enter Customer Id :");
    scanf("%d",&id);

    for(int i=0;i<SIZE;i++)
    {
        if(id == c[i].customerId)
        {
            int amount;
            printf("Enter Deposited amount :");
            scanf("%d",&amount);
            c[i].bal += amount;
            printf("\nSuccessfully Deposited");
            break;
        }
        else
            flag = 1;
    }

    if(flag == 1){
        printf("Customer Id not found...");
    }
}

void withdraw()
{
    int id,flag=0;
    printf("Enter Customer Id :");
    scanf("%d",&id);

    for(int i=0;i<SIZE;i++)
    {
        if(id == c[i].customerId)
        {
            int amount;
            printf("Enter Withdrawal amount :");
            scanf("%d",&amount);
            if(amount <= c[i].bal)
            {
                c[i].bal -= amount;
            }
            else
                printf("Insufficient Balance...");

            break;
        }
        else{
            flag = 1;
        }
    }
    if(flag == 1){
        printf("Customer Id not found...");
    }
}


