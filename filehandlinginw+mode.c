#include<stdio.h>
#include<stdlib.h>
// in w+ mode first time  erase the privuiso cotent 
int main()
{
    FILE *fp;
    fp=fopen("yash.txt","w+");
    char ch;
    char str[30];
    printf("Enter the content you want to modify:");
    gets(str);
    fputs(str,fp);
   // fputs("a",fp); // in direct we print character without usig declartin of datatype 
    rewind(fp); // rewind fuction use to i file poniter last location to transfer in first location 
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }

}