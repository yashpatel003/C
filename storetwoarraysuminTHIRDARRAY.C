#include<stdio.h>
int main()
{
    int a[5],b[5],sum[5];
    int i;
    printf("Enter the element of array1: ");
    for(i=0;i<5;i++)   // read the first array
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element of array2 :");
    for(i=0;i<5;i++)  // read the sceond array
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        sum[i]=a[i]+b[i];
        printf(" sum array element index %d is=%d \n",i,sum[i]);
    }
}