#include<stdio.h>
int main()
{
    char ch;
    FILE *fp;

    fp = fopen("D:\\practice\\file.txt","r");

    if(fp == NULL)
    {
        printf("File not found");
    }
    else{
        // printf("Enter the character");
        // scanf("%c",&ch);
        // fputc(ch,fp);
        ch = fgetc(fp);
        printf("%c",ch);
        fclose(fp);
        printf("File created...");
        
    }

}