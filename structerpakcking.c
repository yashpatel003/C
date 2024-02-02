#include<stdio.h>
// exmple of structer packing 
#pragma pack(1)  // 1 ni jgye game te lakhi skay tema 2 varible memory vache atli jgya hashe 
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