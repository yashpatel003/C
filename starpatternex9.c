#include<stdio.h>
int main()
{
    int i,j,rows,space,num;
    printf(" Enter the number of rows :");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(i==1 && j<=rows || j==1 && i<=rows || i==rows && j<=rows || j==rows && i<=rows)
           {
                printf("*");
           }
            else
            printf(" ");
        }
        printf("\n");
      }
}