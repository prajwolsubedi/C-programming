//Program to store and access the record of five students with five different subjects using structure.
#include<stdio.h>
struct students
{
    int id;
    char name[10];          //this is declaration of string
    int marks[5];           //this is declaration of array
};
struct students s[5];
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("Enter the id of the student:");
        scanf("%d",&s[i].id);
        printf("Enter the name of the student:");
        scanf("%s",s[i].name);
        for(j=0;j<3;j++)
        {
            printf("Enter the marks:");
            scanf("%d",&s[i].marks[j]);
        }
    }
      for(i=0;i<3;i++)
    {
        printf(" id of the student:%d\n",s[i].id);
        printf("name of the student:%s\n",s[i].name);
        for(j=0;j<3;j++)
        {
            printf("your marks:%d\n",s[i].marks[j]);
        }
    }
    
    return 0;
}
