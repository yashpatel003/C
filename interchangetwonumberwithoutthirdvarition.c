#include <stdio.h>
//inter change two number without third varition
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("number without interchang \n");
    printf("%d %d ",a,b);
    printf("number after interchang \n");
    printf("%d %d %d",b,a,c);

    return 0;
}