#include<stdio.h>
int main()
{
    int i,j,rows,num=65;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",num);
        }
        num=num+1;
        printf("\n");
    }
}