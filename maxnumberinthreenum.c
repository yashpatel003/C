#include<stdio.h>
int main()
{ 
    int a,b,c,x;
    printf("Enter the value of a,b,c \n");
    scanf("%d %d %d ",&a,&b,&c);
    if(a>b && a>c)
    printf("%d is the largest number.", a);

    else if(b>c )
    printf("%d is the largest number.", b);

    else
    printf("%d is the largest number.", c);

  /* OR
    x= (a>b && a>c)?a:(b>c)?b:c;
    printf(" max num : %d",x);
*/
     return 0;
}
