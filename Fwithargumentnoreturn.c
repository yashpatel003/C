#include<stdio.h>
// fuction with argument without return type
void sum(int , int);
int main()
{
    int a,b;
    printf("Enter the number:\n");
    scanf("%d%d",&a,&b);
    sum(a,b);

}
void sum(int x,int y)  // assign valu of a in x and value of b in ys
{   
    int sum=0;
    sum=x+y;
    printf("sum=%d",sum);
}