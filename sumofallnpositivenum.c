#include<stdio.h>
// To find the sum off all n positive intrger number 
int main()
{
    int sum = 0,num,i;
    printf(" Enter num : ");
    scanf("%d",&num);
  /*  for(i=1;i<=num;i++)    // run in linear time 
    {
        sum +=i; // sum = sum +i
    }
    printf(" sum=%d",sum);

    return 0;
};*/
       // runs in constant time 
       sum =( num*num + num)/2;
        printf(" sum=%d",sum);

    return 0;
}
