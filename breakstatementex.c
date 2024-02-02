#include<stdio.h>
int main()
{
    // break is use for thorught the program 
    // to enter 5 number and sum of all 5 number and if number is negative then go out the loop 
    int i,a,sum = 0;
    for(i=1;i<=5;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&a);
        if(a<0)
        {
            break; // when a<0 it will out the loop 
        }
        sum +=a;   // sum = sum +a
    }
    printf("%d",sum);
    return 0;
}