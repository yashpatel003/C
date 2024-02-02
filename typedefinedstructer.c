#include<stdio.h>
// typedef means we define data type name that contaion data type name
// we defined typedef int abc then if we write abc=1; then it contions integer value
typedef struct student
{
    int rollno;
    char name[20];
    float marks;
}yash; // datatype name aahi lakhvanu structer ma jyre typedef fuction use karvanu hoy tyre 
int main()
{
    yash s={1,"nayan",98.8};
    printf("%d %s %f\n",s.rollno,s.name,s.marks);
}