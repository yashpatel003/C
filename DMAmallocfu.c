#include<stdio.h>
#include<stdlib.h>
// malloc() fuction if we not initilized value then print any garbage value 
int main()
{
    int *ptr;
    int n,i;
    printf("Enter the total number of values:");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
   
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