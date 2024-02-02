#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char num[100]={9,'a',1,1,'d',4,5,6,'g','y'};
    
    int i,j;
    for(i=0;i<=9;i++)
    {   
      int n=0;
        for(j=0;j<=strlen(num);j++)
        {
            if(i==num[j])
            {
                n++;
            }
        }
        printf("%d %d\n",i,n);
    }

     
    return 0;
}
