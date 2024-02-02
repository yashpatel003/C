//program using pointers to compute the sum of all elements stored in an array
#include<stdio.h>
int main()
{   
    int i=0,sum=0;
    int x[]={3,5,2,6,7};
    int *p;
    p=x;
    while(i<5)
    {   
        printf("addres of x[%d]= %d\n ",i,&x[i]);
        sum+=*p;
        p++;
        i++;
    }
    printf("sum= %d \n",sum)  ; 
}