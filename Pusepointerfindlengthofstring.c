//program using pointers to determine the length of a character string
#include<stdio.h>
int main()
{
    int length;
    char s[30]="welcom";
    char *c=s;
    char *p=s;
    while(*p !='\0')
    {
        printf("addres of s1:%d\n",p);
        p++;
    }
    length=p-c; // differenc bet last elment to first element
    printf("length=%d",length);
}