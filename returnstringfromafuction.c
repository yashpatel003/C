// return the string from a fuction   static is indivusual memory that is exsces anywhere
#include<stdio.h>
char *  display();
int main()
{
    char * str;
    str=display();
     printf("string is %s\n",str);
    str[0]='a';
    printf("string is %s\n",str);
}
char * display()
{   
 static   char str[10];
 printf("string:",str);
 gets(str);
    
    return str;
}