#include<stdio.h>  
#include<string.h>
int main()
{  // reverse the string means swap first element to last element
    /*char s1[19];
    printf("Enter s1 : ");
    gets(s1);
    strrev(s1);   // pre defined fuctin for revrse the string 
    printf("%s",s1);
    */
    int i,j,l;
    char s1[19],s;
    printf("Enter s1 : ");
    gets(s1);
    l=strlen(s1);
   /* for(i=0;i<=l/2;i++)
    {
         s=s1[i];
         s1[i]=s1[l-1-i];
         s1[l-1-i]=s;
    }
    printf("%s",s1);
     */
     for(i=0,j=l-1;i<j;i++,j--)   // j is last element of string without null character
     {
         s=s1[i];
         s1[i]=s1[j];
         s1[j]=s;
     }
     printf("%s",s1);

}