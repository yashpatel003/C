#include<stdio.h>
struct yash{
    int a;
    float b;
    char c;
};
int main()
{
    struct yash s={.b=2.2,.a=54,.c=97};  // called as designated initiliation 
    printf("%d %f %c",s.a,s.b,s.c);

}