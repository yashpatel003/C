#include<stdio.h>
#include<stdlib.h>
// in a+ mode reading and appeending 
// append means wrirong at the end of the privuises file content 
int main()
{
    FILE *fp;
    fp=fopen("yash.txt","a+");
    char ch;
    char str[30];
   printf("Enter the string :");
    gets(str);
    fputs(str,fp);
    rewind(fp); // rewind fuction use to i file poniter last location to transfer in first location 
    // if we read first then no need of rewind fuction 
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }

}