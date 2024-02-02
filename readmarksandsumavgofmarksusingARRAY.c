#include<stdio.h>
int main()
{
  int marks[5];
  int i;
  float avg,sum=0;
  printf("Enter the marks : ");
  for(i=0;i<5;i++)
  {
    scanf("%d", &marks[i]); 
    sum=sum+marks[i];
  }
   avg = sum/5;
  printf("sum=%f",sum);
   printf(" avg=%f \n",avg);
}