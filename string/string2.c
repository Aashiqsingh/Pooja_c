#include<stdio.h>
#include<string.h>
int revName(char name[]){
    // printf("Name = %s",name);
    char lname[20];
    char temp[20];
    strcpy(temp,name);
    
    strrev(name);
    strcpy(lname,name);
    // printf("\nReversed name = %s",name);
    // printf("\nOriginal name = %s",temp);

    if(strcmp(lname,temp) == 0)
    {
        printf("\n%s is palindrome",name);
    }
    else{
        printf("\n%s is not palindrome",temp);
    }
}

void main()
{
    char fullName[20];


    printf("Enter your name:");
    gets(fullName);

    revName(fullName);
}