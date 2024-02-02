#include<stdio.h>
//  Find capital,small letter, digits or any special character.
int main()
{
    char x;
    printf(" Enter the character \n");
    scanf("%c",&x);
    if(x>=48 && x<=57)
    printf(" %c is digit",x);
    else if(x>=65 && x<=90)
    printf(" %c is capital letter",x);
    else if(x>=97 && x<=122)
    printf( " %c is small letter ",x);
    else
    printf(" %c is special charater",x);

    return 0;
    
}