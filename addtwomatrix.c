#include<stdio.h>
int main()
{
    int a[2][3],b[2][3],sum[2][3],i,j;
    printf("Enter the element of first matrix: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the element of second matrix: ");
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf(" first Matrix  is \n :");
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]); // \t is for space between two number 
        }
        printf("\n");
    }
    printf("second Matrix  is \n :");
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]); // \t is for space between two number 
        }
        printf("\n");
    }
    printf(" sum of two Matrix  is \n :");
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
