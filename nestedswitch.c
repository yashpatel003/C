#include<stdio.h>
// Nested switch
int main()
{ 
    int age,marks;
 
    printf(" Enter age ");
    scanf("%d",&age);
     printf(" Enter marks ");
    scanf("%d",&marks);

    switch(age)
    {
        case 10:
                printf(" age is 10 ");
                switch(marks)
                {
                    case 45: printf(" grade is d ");
                            break;
                    case 95 : printf(" grade is a");
                            break;
                    default: printf(" enter valid marks");

                }
                break;

        case 3 :
                printf(" age is 3");
                break;
    }
}