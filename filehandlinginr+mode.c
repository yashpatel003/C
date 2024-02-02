#include<stdio.h>
#include<stdlib.h>
// in r+ mode we modify the content 
int main()
{
    FILE *fp;
    fp=fopen("yash.txt","r+");
    char str[30];
    printf("Enter the content you want to modify:");
    gets(str);
    fputs(str,fp);
    fputs("a",fp); // in direct we print character without usig d3clartin of datatype 
    fclose(fp);

}