#include<stdio.h>
// using recurision find factorial
int fun(int num) 
{
    if(num==1 || num==0)
    return 1;
    else
    { 
        return (num*fun(num-1));
    }
}
    int main()
    {
        int num;
        printf("Enter the number: ");
        scanf("%d",&num);
    
        printf("the factorial of %d is %d\n",num,fun(num));
    }

