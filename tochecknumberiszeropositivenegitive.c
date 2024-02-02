#include<stdio.h>\
// To check the number is positive , negitive or zero
int main()
{
    int n;
    printf(" Enter the value of n \n");
    scanf("%d",&n);
    if(n>0) // conditon is true then it is excuted10
    printf(" n is positive");
    else if(n<0)
    printf(" n is negitive");
    else 
    printf(" n is zero");
    return 0;
}