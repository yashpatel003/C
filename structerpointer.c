#include<stdio.h>
//structer pointer is point to the address memory block that store the structer
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
    struct student*ptr=&s;  
    
    printf("roll no is : %d\n",ptr->rollno);  // ptr->name means ptr point the adrres of  roll number 
    printf("name is : %s\n",ptr->name);
    printf("marks is : %f\n",ptr->marks);

}
