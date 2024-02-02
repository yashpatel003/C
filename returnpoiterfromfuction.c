//return a pointer from fuction  // adress of the first element is store
#include<stdio.h>
 int*  returnpointer(int a[]);
 void main()
 {  
    int *p;
    int a[]={1,2,3,4,5};
    p=returnpointer(a);
    printf("%d",*p);

 }
 int*  returnpointer(int a[])   // int a[] as takes as int *a
 {
    a=a+2;  // it excse the third element 
    return a;
 }
