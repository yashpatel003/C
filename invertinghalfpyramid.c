/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
#include<stdio.h>
int main()
{
    int i,j,rows;
    printf(" enter the rows :");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)  // fpr rows use for number of we wANT TO pattern print *
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}