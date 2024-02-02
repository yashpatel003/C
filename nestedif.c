#include<stdio.h>
int main()
{
    int age,sallary;
    printf(" enter age & sallary ");
    scanf(" %d %d ",&age,&sallary);
    if(age>60)
    {
        if(sallary<60000)
        {
            sallary=sallary + 10000;
            printf(" sallary: %d\n  ",sallary);
        }
        else
        {
            sallary=sallary + 5000;
            printf(" sallary: %d\n  ",sallary);

        }
    }
    else
    {
           sallary=sallary + 3000;
            printf(" sallary: %d\n  ",sallary);
    }
    printf(" End of program");
    return 0;
}