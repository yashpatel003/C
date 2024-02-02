#include<stdio.h>
// tail recurison is the last thing is recursion 
int s1(int);
int main()
{
    s1(10);
}
int s1(int a)
{
    if(a<1)
    return 1;
    else 
    {
    printf("%d",a);
    s1(a/2);
    }
}
