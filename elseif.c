#include<stdio.h>
int main()
{
    int marks;
    printf(" Enter marks \n");
    scanf("%d", &marks);
    if(marks>80)
    printf( " Grade is A");
    else if(marks>70)
    printf( " Grade is B");
    else if(marks>60)
    printf( " Grade is C");
    else
    printf(" Grade is D");
    return 0;
}

