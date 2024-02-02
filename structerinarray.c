#include<stdio.h>
 // student name mark roll no details 
struct student  // studemnt is sytructer name
{   //declaration
    int rollno;
    char name[30];
    float marks;
};
void main()
{   
    int i;
    struct student s[3];
    for(i=0;i<3;i++)
    {   
        printf("enter the student info s[%d]: \n",i);
        scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].marks);
    }
    for(i=0;i<3;i++)
   {   
       printf("print the student info s[%d]: \n",i);  
       printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
    }
      
    
    
    
}