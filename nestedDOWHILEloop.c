#include<stdio.h>
int main()
{
    int i = 1 ,j=0;
    do{
        do{
        printf("%d",j++);
         }
         while(j<4);
         printf("%d",i++);
      }
      while(i<3);
 return 0;
}