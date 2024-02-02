#include<stdio.h>

struct student  // studemnt is sytructer name
{   //declaration
    int rollno;
    char name[30];
    float marks;
};
void main()
{   
    struct student s;
    printf("Enter the info. of stdunt:\n");
    scanf("%d %s %f",&s.rollno,&s.name,&s.marks);
    
    
}