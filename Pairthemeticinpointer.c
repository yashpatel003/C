#include<stdio.h>
int main()
{    
    int d;
   /* int a[]={5,3,7,1,23,46};
    int *p=a; // a is the base aadres 
    p=p+2; // address of p+ 2* size of datatype
    printf("%d\n",p);   // this give the address 
    printf("%d\n",*p);   // this is give value the array
    */
    /* int a[]={5,3,7,1,23,46};
    int *p=&a[3];  // addres of aaray of index 3
    p=p-2; // p= address of p - 2*size of data type 
    printf("%d\n",p);   // this give the address 
    printf("%d\n",*p);   // this is give value the array
    int *q=&a[5];
    d = q-p;
    printf("%d\n",d); // addres of p - addres of q / size of integer
     */
  /*   int a[]={3,4,1,67,45};
     int *p=a;
     p++;  // first excute the value and then increment the addres value
     printf("%d\n",p); // give the addres value
    printf("%d\n",*p);  // give the array value 
    ++p;
     printf("%d\n",p); // give the addres value
    printf("%d\n",*p);  // give the array value 
    
   // printf("%d %d\n",*++p,*p++);   // asssositave rule is rigth to left 

    printf("%d %d\n",++(*p),(*p)++); 
    */
    int a[]={3,4,1,67,45};
     int *p=&a[3];
     p--;
     printf("%d \n",p);
      printf("%d \n",*p);
     




}