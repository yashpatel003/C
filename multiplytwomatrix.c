#include<stdio.h>
#define N 50       // define macro(To use in array we want value between 0-50)
int main()
{
    int a[N][N],b[N][N],mul[N][N],i,j,k,sum,m,n,p,q;
    printf("Enter rows and column of first matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter rows and column of second matrix: ");
    scanf("%d %d",&p,&q);
     printf("Enter the secod matrix:\n");
     for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf(" first Matrix  is \n :");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]); // \t is for space between two number 
        }
        printf("\n");
    }
    printf("second Matrix  is \n :");
     for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]); // \t is for space between two number 
        }
        printf("\n");
    }
    if(n!=p)
    {
        printf(" can not multiply ");
    }
    else
    {
        for(i=0;i<m;i++)
        {
        for(j=0;j<q;j++)
        {  
            sum=0;
            for(k=0;k<m;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            mul[i][j]=sum;
        }
        }
    }
    printf("multiplication matrix is:\n");
    for(i=0;i<m;i++)
        {
        for(j=0;j<q;j++)
        {  
            printf("%d\t",mul[i][j]);
        }
         printf("\n");
        }
}

