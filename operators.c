#include<stdio.h>
int main ()
{ 
    int a = 4, b = 8 ,x ,y;
    y = a++;
    x = ++b;
   // printf("%d \n",y);
   // printf("%d \n",a);
   // printf("%d \n",x);
   // printf("%d \n",b);
   // printf("%d \n", a == b);
    //printf("%d \n", !(a == b));
    //printf("%d \n", a > b);
    //printf("%d \n", a >= b);
    //printf("%d \n", a < b);
    //printf("%d \n", a <= b);
    //printf("%d \n", a && b);
    printf("%d \n", a || b);
    printf("%d \n", a & b);
    printf("%d \n", a | b);
    printf("%d \n", a >> b);
    printf("%d \n", a << b);
    printf("%d \n", a != b);

 return 0;
}