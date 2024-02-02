#include<stdio.h>
// calulater using fuction 
int sum(int a,int b)
{
    printf("sum=%d\n",a+b);
}
int sub(int a,int b)
{
    printf("sub=%d\n",a-b);
}
int mul(int a,int b)
{
    printf("mul=%d\n",a*b);
}
int div(int a,int b)
{
    printf("div=%d\n",a/b);
}

int main()
{  
    int choise,a,b;
    int (*fptr[10])(int,int)={sum,sub,mul,div}; // fptr is array of fuction pointer
    printf("Enter a choise:\n");
    scanf("%d",&choise);  // choise 0 then add choise=1 then sub and so on
    printf("Enter number:\n");
    scanf("%d %d",&a,&b);
    
      (*fptr[choise])(a,b);
}