#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    int a=34;
    char ch='h';  // for character
    int i;
    char str[30];
    fp=fopen("yash.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
  
    //fputc(ch,fp);//for character
    printf("Enter the string:");
    gets(str);
   /* for(i=0;i!=strlen(str);i++) // using loop print string charcter by charcter
    {
       fputc(str[i],fp); 
    }*/
    //fputs(str,fp); // print using fputs fuction
    // fpr int , charcter ,string print use fprintf fuction 
    fprintf(fp,"%d %c %s",a,ch,str);

    fclose(fp);
}