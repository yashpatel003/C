#include<stdio.h>
// To find the average off first  n positive integer number 
int main()
{
    int sum = 0,num,i;
    float average;
    printf(" Enter num : ");
    scanf("%d",&num);
    //for loop excuted if i<=num
    for(i=1;i<=num;i++)
    {
        sum +=i; //sum = sum + i
    }
    average = sum/num;
    printf(" average=%f",average);

    return 0;
}