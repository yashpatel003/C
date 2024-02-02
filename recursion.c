#include<stdio.h>
//sum of n natural number using recurision 
int sum(int x)
{   
    int s=0;
    if(x==1)   // base condition for recurision 
    return x;
    s=x+sum(x-1);  // call sum in sum fuction
    return s;

}
int main()
{
    int a;
    printf("Enter the number : \n");
    scanf("%d",&a);
    a=sum(a);
    printf("%d",a);
}