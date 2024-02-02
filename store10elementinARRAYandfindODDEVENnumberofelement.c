#include<stdio.h>
int main()
{
    int a[10],i,even=0,odd=0;
    printf("Enter the elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)  // Reminder is 0 then even number 
        even++;     //even=even+1
        else
        odd++;      // odd = odd +1
    }
    printf("number of even elments: %d",even);
    printf("\nnumber of odd elments: %d",odd);
}