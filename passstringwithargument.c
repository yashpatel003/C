#include<stdio.h>
//pass string with argument 
void modify(char[],char[]); // declartion  hera char [] ni jagye char * lakhi sakay
int main()
{
    char s1[30];
    printf("Enter strig:\n",s1);
    gets(s1);
    char s2[30];
    printf("Enter strig:\n",s2);
    gets(s2);
    modify(s1,s2);
}
void modify(char s1[],char s2[])
{   
    int i,length=0;
    for(i=0;s1[i]!='\0';i++)
    {
        length=length+1;
    }
    printf(" length of s1;%d\n",length);
    s2[3]='A';
    printf(" String is %s %s \n",s1,s2);
}