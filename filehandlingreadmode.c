#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("yash.txt","r");
    if(fp==NULL)
    {
        printf("No file exist");
        exit(1);
    }
    char ch;
   // ch=fgetc(fp);  // for character read 
   // printf("%c\n",ch); 
    //read string using charatcer by character using fuction feof() 
   /* while(!feof(fp)) // feof file end thay to 1 aape nake 0 appe atle ! (not)lagavu pade 
    {           
        ch=fgetc(fp);
        printf("%c",ch);
    }*/
    // for read complete string using fgets function 
    char str[30];
    /*fgets(str,10,fp); // 10 ni jagye jetla number read karva hoy te lakhavu
    printf("%s",str);*/ 
    // if file containss more then ob=ne statement 
    while(!feof(fp)) // feof file ed thay to 1 aape nake 0 appe atle ! (not)lagavu pade 
    {           
        fgets(str,10,fp);
        printf("%s",str);
    }

    fclose(fp);
}