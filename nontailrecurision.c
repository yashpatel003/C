#include<stdio.h>
// non-tail recurison is the last thing is not recursion  but ther statement
int s1(int);
int main()
{   
    int a;
    printf("Enter the num: \n");
    scanf("%d",&a);
    s1(a);
}
int s1(int a)
{
    if(a<1)
    return 1;
    else 
    {
    printf("%d",a);
    s1(a/2);
    printf("%d",a);
    }
}
