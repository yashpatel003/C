#include<stdio.h>
union detials // union declartion
// in union function last value entered is stored only 
//above exmaple int d will be store and print only and will print garbage value
// grnerally union is not use 
{
    int a;
    float b;
    char c;
    int d;
};
int main()
{
    union detials u;
    u.a=5;
    u.b=4.4;
    u.c=65;
    u.d=67;
    printf("a=%d\n",u.a);
    printf("b=%f\n",u.b);
    printf("C=%c\n",u.c);
    printf("d=%d\n",u.d);
}