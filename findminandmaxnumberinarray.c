#include<stdio.h>
int main()
{
    int array[5],i;
    printf(" Enter the number of elememt: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);  
    }
    int max=array[0],min=array[0];
     for(i=0;i<5;i++)
    {
        if(array[i]>max)
        max=array[i];
        else if(array[i]<min)
        min=array[i];
        else
        continue;
    }
    printf("max=%d",max);
    printf("\nmin=%d",min);
}