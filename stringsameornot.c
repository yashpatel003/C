// s1 and s2 same or not and if not same then convate them  
//them and then add new string s3 and last display all the string
#include<stdio.h>
#include<string.h>
int main()
{   
    int l1,l2,l3,i,flag=0;
    char s1[30],s2[30],s3[30];
    printf("Enter string s1:");
    gets(s1);
    printf("Enter string s2:");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    printf("lengths1=%d \n",l1);
    printf("lengths2=%d \n",l2);
    for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
           // flag=1;
            for(i=0;i<=l2;i++)
            {
                s1[l1+i]=s2[i];
            }
            printf("string:%s \n",s1);
        }
        break;   
     }
       
}
   
