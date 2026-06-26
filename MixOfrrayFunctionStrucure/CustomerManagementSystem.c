#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

struct customer{
    int cid;
    char cname[20];
    char branch[20];
    int flag;
}c[SIZE];

void create(){
    for(int i=0;i<SIZE;i++)
    {
        printf("Enter Customer Id :");
        scanf("%d",&c[i].cid);
        printf("Enter Customer Name :");
        scanf("%s",c[i].cname);
        printf("Enter your branch :");
        scanf("%s",c[i].branch);
        c[i].flag = 1;
    }
}

void display()
{
    printf("\nCUSTOMERID\tCUSTOMER NAME\t CUSTOMER BRANCH");
    for(int i=0;i<SIZE;i++)
    {
        if(c[i].flag == 1)
        {
            printf("\n%d\t%s\t%s",c[i].cid,c[i].cname,c[i].branch);
        }
    }
}

void particularDisplay(int id){
    int temp=0;
    for(int i=0;i<SIZE;i++)
    {
        if(c[i].cid == id && c[i].flag == 1)
        {
            printf("CUSTOMER ID : %d",c[i].cid);
            printf("\nCUSTOMER NAME : %s",c[i].cname);
            printf("\nCUSTOMER BRANCH : %s",c[i].branch);
            temp = 0;
            break;
        }
        else{
            temp=1;
        }
    }
    if(temp == 1){
        printf("\nCUSTOMER NOT FOUND !!");
    }
}

void delete(int id)
{
    for(int i=0;i<SIZE;i++)
    {
        if(c[i].cid == id){
            c[i].flag=0;
        }
    }
}

int main(){
    int id;
    int s=0,choice;

    while(s==0)
    {
        printf("\n1 -- CREATE");
        printf("\n2 -- Display");
        printf("\n3 -- Particular Display");
        printf("\n4 -- DELETE");
        printf("\n5 -- UPDATE");
        printf("\n6 -- SEARCH");
        printf("\n7 -- EXIT");
        printf("\nEnter Your choice :");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                create();
                break;
            case 2: display();
                break;
            case 3: 
                printf("Enter your ID :");
                scanf("%d",&id);
                particularDisplay(id);
                break;
            case 4: 
                printf("Enter your Id :");
                scanf("%d",&id);
                delete(id);
                break;
            case 7: s=1;
                break;
        }
    }


    return 0;
}