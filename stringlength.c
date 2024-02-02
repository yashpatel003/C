#include<stdio.h>  
#include<string.h>
int main()
{    /* by using predefined fuction strlen in <string.h> header file
    int count = 0;
    char name[30];
    printf("Enter name : ");
    gets(name);
    count = strlen(name);
    printf("length of string: %d",count);
    puts(name);
    */

    int count = 0 , i=0;
    char name[30];
    printf("Enter name : ");
    gets(name);
    while(name[i] !='\0')   // true for not equal to null character 
    {
        count++;
        i++;
    }
    printf("length of string: %d \n",count);
    puts(name);

}