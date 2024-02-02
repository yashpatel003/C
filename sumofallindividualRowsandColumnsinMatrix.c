#include<stdio.h>
int main()
{   // use for only n*n matrix means same rows and column 
    int a[3][3],i,j,sumrows,sumcolumn;
    printf(" Enter the element of matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf(" Matrix is : \n :");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        sumrows=sumcolumn=0;
        for(j=0;j<3;j++)
        {
           sumrows+=a[i][j];
           sumcolumn+=a[j][i];
        }
        printf("\n Sum of Rows =%d",sumrows);
          printf("\n Sum of column =%d",sumcolumn);
    }
}