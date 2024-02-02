#include<stdio.h>
int main()
{
    char name[10];
    printf("Enter name : ");
    //scanf("%s",name);   // for read 
    gets(name);  // for read full string with space
   // printf("%s",name);   // for prints
    puts(name);   // for read full string with space
    
    printf("%s",&name[2]);  // it start print from second index
}