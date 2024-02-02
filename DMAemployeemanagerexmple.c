#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,l;
char *ptr;
printf("Enter the number of employe:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    printf("employ %d\n:",i+1);
    printf("totl character employe id :\n");
    scanf("%d",&l);
    ptr=(char*)malloc((l+1)*sizeof(char));
    printf("enter employ id :");
    scanf("%s",ptr);
    printf("employe id:%s\n",ptr);
}

free(ptr);
}