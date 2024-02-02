#include<stdio.h>
//To make calulator using switch case
int main()

{
    char operator;
    int a,b,sum,sub,mul,div;
    printf(" Enter operator  \n : ");
    scanf("%c",&operator);
    printf(" Enter operands \n : ");
    scanf("%d%d",&a,&b); 

    switch(operator)
    {
        case '+' : sum = a+b;
                  printf(" sum = %d",sum);
                  break;

        case '-' : sub = a-b;
                  printf(" sub = %d",sub);
                  break;   

        case '*' : mul = a*b;
                  printf(" mul = %d",mul);
                  break;  

        case '/' : div = a/b;
                  printf(" div = %d",div);
                  break;   
                
    }
    
    return 0;
}