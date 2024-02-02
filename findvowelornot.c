#include<stdio.h>
// To find the enter charcter is vowel or not
int main()
{
    char ch;
    printf("Enter charcter:");
    scanf(" %c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
                 printf(" charcter is vowel ");
                 break;
        defualt : printf(" charcter is not vowel ");
    }
    return 0;

}