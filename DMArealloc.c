#include<stdio.h>
#include<stdlib.h>
// realloc() fuction use to incriment or decrement the size of memory 
int main()
{
    int *ptr;
    int n,i;
    printf("Enter the total number of values:");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));
   
    for(i=0;i<n;i++)
    {
       scanf("%d",&ptr[i]); // ptr[i] ni jagye ptr+i lakhi sakay 
    }
    printf("The entered value:\n");
     for(i=0;i<n;i++)
    {
       printf("%d\n",ptr[i]);
    }
   printf("Enter the new value :");
   scanf("%d",&n);
   ptr=(int*)realloc(ptr,n);
   
    for(i=0;i<n;i++)
    {
       scanf("%d",&ptr[i]); // ptr[i] ni jagye ptr+i lakhi sakay 
    }
    printf("The entered value:\n");
     for(i=0;i<n;i++)
    {
       printf("%d\n",ptr[i]);
    }
   free(ptr);
}