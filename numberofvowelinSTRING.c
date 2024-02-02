#include<stdio.h>
#include<string.h>
int main()
// find the number of vowel and constant in string 
{   
    int constant=0,vowel=0,i=0,length;
    char s1[30];
    printf("Enter the string:");
    gets(s1);
    length=strlen(s1);
    printf(" length=%d \n",length);
    while(s1[i] !='\0')
    {
        if(s1[i]=='A'||s1[i]=='a'||s1[i]=='E'||s1[i]=='e'||s1[i]=='I'||s1[i]=='i'||s1[i]=='O'||s1[i]=='o'||s1[i]=='U'||s1[i]=='u')
           vowel++;
        else
          constant++;
        i++;
    }
    printf("vowel=%d \n",vowel);
    printf("constant=%d",constant);

}


