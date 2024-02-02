#include<stdio.h>
// it is find the to factorial program 
// fu1 is call fu2 and in fun2 call fun1 
int fun1(int);
int fun2(int);
int main()
{  int a;
   printf("Enter the number:\n");
   scanf("%d",&a);
   printf("%d",fun1(a)); 
}
int fun1(int n)
{
    if(n<=1)
    return 1;
    else
    return n*fun2(n-1);
}
int fun2(int n)
{
    if(n<=1)
    return 1;
    else 
    return n*fun1(n-1);
}