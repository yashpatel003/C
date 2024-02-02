#include <stdio.h>
// To find the number is odd or even
int main()
{
    int num;
    printf("Enter a num :");
    scanf("%d",&num);
    
    if(num%2==0){
        printf("num is even");
    }
    else {
        printf("num is odd");
    }

    return 0;
}

