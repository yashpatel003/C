// exmple of fuction pointer 
#include<stdio.h>
int sum(int,int);
void main()
{
    int s=0;
    int (*ptr)(int,int)=sum;
    s=(*ptr)(2,3);
    printf("sum=%d",s);
}
int sum(int a,  int b)
{
    return a+b;
}