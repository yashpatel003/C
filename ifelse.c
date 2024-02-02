#include<stdio.h>
int main()
{ 
    int age;
    printf(" Enter age : \n ");
    scanf(" %d ",&age);
    if(age> 20 && age< 30)
    {
        printf(" your age %d \n :", age);
        printf(" you can go cofee with me \n ");
    }
    else
    {
       printf(" your age %d \n :", age);    
       printf(" its time to go home \n ");
    }
    printf(" out of ir-else");

    return 0;
}