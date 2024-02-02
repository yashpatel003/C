#include<stdio.h>
// exmple of structer padding 

struct yash
{
    char a;
    int b;
    char c;
}s;
int main()
{
    printf("%d",sizeof(s));
}