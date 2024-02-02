#include<stdio.h>
#include<string.h>
int main()
{    
    int l1,i,count;
    char s1[30],rev;
    printf("Enter the string s1:");
    gets(s1);
   
    l1=strlen(s1);
  
    for(i=0;i<=l1/2;i++)
    {
         rev=s1[i];
         s1[i]=s1[l1-1-i];
         s1[l1-1-i]=rev;
    } 
    for(i=0;i<l1;i++)
    { 
         if(s1[i]==rev[i])
   printf("string is pelindrom:");
   else 
   printf(" String is not prlindrom");

    }
  
}