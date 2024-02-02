#include<stdio.h> 
struct driver
{
    char name[20];
    int driving_liscince_no;
    char root[30];
    float travel_distance;
};
int main()
{
    int i;
    struct driver m[3];
    for(i=1;i<3;i++)
    {   
        printf("the information for driver%d is:\n",i);
        printf("driver name:\n");
        scanf("%s",&m[i].name);
       printf("driving licence no:\n");
       scanf("%d",&m[i].driving_liscince_no);
       printf("root that take by driver:\n");
       scanf("%s",&m[i].root);
       printf("total travel distance:\n");
       scanf("%f",&m[i].travel_distance);
        
    }
    for(i=1;i<3;i++)
    {   
        printf(" The information for  driver %d:\n",i);
       printf("driver name:%s\n",m[i].name);
       printf("driving licence no:%d\n",m[i].driving_liscince_no);
       printf("root that take by driver:%s\n",m[i].root);
       printf("total travel distance: %f\n",m[i].travel_distance);
    }
}