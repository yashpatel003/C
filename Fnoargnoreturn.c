# include <stdio.h>
// no argument without no returen
void sum();   // declar the fuction 
void sub();

int main()
{
    sum(); // calling fuction 
    sub();  // calling fuction 
}
void sum()    // called fuction
{    
    int a,b,sum=0,sub=0;
    printf("Enter the num:\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
      
}
void sub()    // called fuction
{    
    int a,b,sum=0,sub=0;
    printf("Enter the num:");
    scanf("%d %d\n",&a,&b);
    sub=a-b;
    printf("sub=%d",sub);  
}


