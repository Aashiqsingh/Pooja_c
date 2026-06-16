#include<stdio.h>
// #define SIZE 3
void scan(int arr[],int n);
void display(int arr[],int n);


void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int a[n];

    scan(a,n);
    display(a,n);
}

void scan(int arr[] , int n)
{
    printf("ENTER ALL ELEMENTS OF ARRAY :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void display(int arr[],int n)
{
    printf("THE ARRAY IS :");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
}