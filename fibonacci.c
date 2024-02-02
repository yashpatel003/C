#include<stdio.h>
// recurisive type
int fibo(int n)
{
    if(n==1 || n==2)
    return n-1;
    else 
    {
        return fibo(n-1) + fibo(n-2);
    }
}
int main()
{   
    int i,a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        printf("%d",fibo(i));
    }
}