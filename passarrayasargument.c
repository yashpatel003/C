#include<stdio.h>
// find average marks of five student
int avg(int [],int ); // decllartion of array in fuction 
void main()
{
    int marks[]={45,30,20,19,37},average,size;
    size=sizeof(marks)/sizeof(marks[0]);// size=sizeof (array name)/sizeof arry single value
    average=avg(marks,size);
    printf("average=%d\n",average);
    printf("Iside main size of marks:%d",size);
    printf("Iside main size of marks in bytes:%d\n",sizeof(marks));

}
int avg(int marks[],int size)
{  
    int i,sum=0,average=0;
   for(i=0;i<size;i++)
   {
    sum=sum+marks[i];
   }
   average=sum/size;
   printf("Iside avg fuction size of marks:%d\n",size);
}
