#include<stdio.h>
int main()
{
    int i,j,rows,num=64;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",num +rows);
        }
        num=num-1;
        printf("\n");
    }
}