#include<stdio.h>
int main()
{
    // to enter 5 number and sum of all 5 number and if number is negative then it showes that the number is invalid and enter the new number
    int i,a,sum = 0;
    for(i=1;i<=5;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&a);
        if(a<0)
        {
            printf("Enter the valid num: ");  // includ valid number in sum
            scanf("%d",&a);
            sum +=a;
            continue; // if a>0 then the control will go on loop conditon  in for 
           
        }
        sum +=a;   // sum = sum +a
    }
    printf("%d",sum);
    return 0;
}