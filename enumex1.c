#include<stdio.h>
enum xenum{c,cpp,java};
int main()
{
    enum xenum var;
    printf("%d\n",sizeof(var)); // size is first index data type depend 
   var=cpp;
    printf("%d\n",var); // it will give the index of cpp 
    return 0;
}
