// Structure array
#include<stdio.h>
struct emp
{
    int id;
    char name[10];
    float salary;
};
int main()
{
    struct emp e[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter the id:\n");
        scanf("%d",&e[i].id);
        printf("Enter the name:\n");
        scanf("%s",e[i].name);
        printf("Enter the salary\n");
        scanf("%f",&e[i].salary);
    }
    for(i=0;i<3;i++)
    {
        printf("your id is %d\n",e[i].id);
        printf("your name is:%s\n",e[i].name);
        printf("your salary is %f\n",e[i].salary);
    } 
    return 0;
}