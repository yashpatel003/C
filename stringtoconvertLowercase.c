#include<stdio.h>  
#include<string.h>
int main()
{
    int i;
    char s1[19];
    printf("Enter s1 : ");
    gets(s1);
    //strlwr(s1);   // pre defined fuctin for lower case the string  for uppercase strupr

    for(i=0;s1[i]!='\0';i++)
    {
       if(s1[i]>='A' && s1[i]<='Z')
       {
        s1[i]=s1[i] + 32;  // add because ASCII of A=65 and ASCII of a=95 differnce bet upercase & lowercase is 32
       }
    }
    printf("%s",s1);

}