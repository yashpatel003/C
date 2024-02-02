#include<stdio.h>
// fuction with argument with return type
// fuction declar and fuction defination return type is same like int 
float sum(int , int);
int main()
{   
    float s;
    int a,b;
    printf("Enter the number:\n");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("sum=%f",s);

}
float sum(int x,int y)  // assign valu of a in x and value of b in ys
{   
    int sum=0;
    sum=x+y;
    return sum;
  
}