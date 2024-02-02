#include<stdio.h>  
#include<string.h>
int main()
{    /* by using predefined fuction strlen in <string.h> header file
    int count = 0;
    char s1[30];
    char s2[19];
    printf("Enter s1 : ");
    gets(s1);
    printf("Enter s2 : ");
    gets(s2);
    
    strcat(s1,s2);  // pre-defined fuctin for add two string 
    strncat(s1,s2,4);  // s2 will be start from index 4 and add in s1
    printf("%s",s1);
    */
    int count = 0,ln1,ln2,i;
    char s1[30];
    char s2[19];
    printf("Enter s1 : ");
    gets(s1);
    printf("Enter s2 : ");
    gets(s2);
    ln1 = strlen(s1);
    ln2 = strlen(s2);
    printf("length of string1: %d \n",ln1);
    printf("length of string2: %d \n",ln2);

    for(i=0;i<=ln2;i++)  
    {
        s1[ln1+i]=s2[i];  // for string 2 is add in s1 sp first print s1 and in cintinue s2 will be print 
                          // use ln1+i 
    }
    printf("%s",s1);
}
