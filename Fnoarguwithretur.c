# include <stdio.h>
// no argument with returen
int sum();   // declar the fuction hear we return type is int 
int sub();

int main()
{   
    int s1,s2;
    s1=sum(); // calling fuction 
    printf("sum=%d",s1);
    s2=sub();  // calling fuction   
    printf("sub=%d",s2);  
}
int sum()    // called fuction
{    
    int a,b,sum=0;
    printf("Enter the num:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum;
      
}
int sub()    // called fuction
{    
    int a,b,sub=0;
    printf("\nEnter the num:");
    scanf("%d %d",&a,&b);
    sub=a-b;
    return sub; 
}


