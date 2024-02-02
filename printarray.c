#include<stdio.h>
int main()
{
    int a[3+2],i;
    printf("Enter the array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
   /* for(i=0;i<5;i++)    // to print the array element 
    {
        printf(" element of array of %d index : %d \n",i,a[i]);
    }*/
    for(i=4;i>=0;i--)    // to print the array element in reverse order 
    {
        printf(" element of array of %d index : %d \n",i,a[i]);
    }
}
