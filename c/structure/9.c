// Program to store name and marks of 3 students and sort the data according to the marks in ascending order.
#include<stdio.h>
#include<string.h>          // for copying the name
int main()
{
    char temp_name[20];     //used for sorting name.
    int temp_marks;         //used for sorting marks.
    struct student
    {
        char name [30];
        int marks;
    };
    struct student s[3];
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("Enter the name:");
        scanf("%s",s[i].name);
        printf("Enter the marks:");
        scanf("%d",&s[i].marks);

    }
    for (i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)      //here it is j+1 cause its the next number from the i.
        {
            if(s[i].marks>s[j].marks)   //###   for descending we just have to change the > to <.
            {
            temp_marks=s[i].marks;
            s[i].marks=s[j].marks;
            s[j].marks=temp_marks;
            strcpy (temp_name,s[i].name);       // you need to sort name as well.
            strcpy (s[i].name,s[j].name);
            strcpy (s[j].name,temp_name);
            }
        }
    }
    printf("sorted data:\n");
    for(i=0;i<3;i++)
    {
        printf("name=%s   marks=%d\n",s[i].name,s[i].marks);
    }

}