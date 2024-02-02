// file in appen mode  you  add new content in privuisios file 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("yash.txt","a");
    if(fp==NULL){
        printf("no file ");
        exit(1);
    }
    char str[40];
    printf("Enter the content you want to add:");
    gets(str);
    //fputs(str,fp);
    fprintf(fp,"\n%s",str);
    fclose(fp);

}