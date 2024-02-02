#include<stdio.h>
int main()
{
    int a =10;
    int *p=&a;
    int**q=&p;
    printf("a=%d",a,*p,**q);
    printf(" Addres of a=%x %x %x ",&a,p,*q); // x is for hexadecimal value 
}