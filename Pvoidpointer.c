#include<stdio.h>
int main()
{
    int a=5;
    float b=6.676;
    char c='4';
    void *vp;   // decleartion of void pointer
     vp=&a;
     printf("%d\n",*(int*)vp); //first vp is converted into integer pointer and then derefernce
     vp=&b;
     printf("%f\n",*(float*)vp);
     vp=&c;
     printf("%c\n",*(char*)vp);
}