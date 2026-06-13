#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];
    int i=0,length=0,count=0;

    printf("Enter string :");
    gets(str);


    // Find Vowels in strings
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    printf("Number of vowels in string is %d",count);





    // find string reverse without using strrev
    // while(str[length] != '\0'){
    //     length++;
    // }
    // printf("Length of string is %d",length);
    // for(i=length;i>=0;i--)
    // {
    //     printf("%c",str[i]);
        
    // }



    // find length without using strlen
    // while(str[i] != '\0'){
    //     // i++;
    //     printf("%c",str[i]);
    // }
    // printf("Length of string is %d",i);
}