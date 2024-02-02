// copy the content of file in onther file 
#include<stdio.h>
#include<stdlib.h>
int main()
{   char c;
    FILE *fptr1,*fptr2;
    fptr1=fopen("yash.txt","r");
    if(fptr1==NULL)
    {
        printf("can't open file ");
        exit(1);
    }
    fptr2=fopen("destination.txt","w");
     if(fptr2==NULL)
    {
        printf("can't open file ");
        exit(1);
    }
    while((c=fgetc(fptr1))!=EOF)   // file1 end na thay tya sudhi loop farshe 
    {
       fputc(c,fptr2);
    }
    printf("succesfully copy");
    fclose(fptr1);
    fclose(fptr2);
}