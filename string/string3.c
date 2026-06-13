#include<stdio.h>
void main()
{
    int count=0;
    char name[20];
    // p o o j a
    printf("Enter your name:");
    gets(name);

    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
            count++;
        }
    }
    printf("Vowel count = %d",count);


}