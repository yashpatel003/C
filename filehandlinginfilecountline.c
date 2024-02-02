#include<stdio.h>  // error aave se 
#include<stdlib.h>
// count how many line in file  
int main()
{
    FILE *fp;
    int count=1;
    char ch;
    fp=fopen("yash.txt","r");
    if(fp==NULL)
    {
        printf("can't open file ");
        exit(1);
    }
    while((ch=fgetc(fp)!=EOF))
    {
        if(ch=='\n')
        {
            count++;
        }
    }
    fclose(fp);
    printf("the number of line in file is: %d",count);

}