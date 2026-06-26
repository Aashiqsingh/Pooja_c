// mode 
// 1. write - w 
// 2. read - r
// 3. apend - a

// fputc()
// fgetc()
// printfc()
// scanfc()


// fopen()
// mode
// fclose()



#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    FILE *fp;
    
    fp = fopen("D:\\practice\\second.txt","a");
    printf("%u",fp);

    if(fp == NULL)
    {
        printf("File not created");
    }
    else{
        printf("Enter the character :");
        scanf("%c",&ch);
        // ch = getch();

        fputc(ch,fp);

        fclose(fp);

        printf("File Created");
    }
    



}