/*#include<stdio.h>
int main()
{
    int i=1;
    do{
        printf("%d \n",i);
        i++;
    }
    while(i<=10);
    return 0;
}*/

#include<stdio.h>    // for 1 to n number 
int main()
{
    int i=1 , n;
    printf(" Enter the value of n : ");
    scanf("%d",&n);
    do{
        printf("%d \n",i);
        i++;
    }
    while(i<=n);
    return 0;
}