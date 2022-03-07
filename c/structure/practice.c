//write a program using the structure to read data of 5 courses (include code,name and credit hoursin it)
// and display data of those course with credit hour greater than 3
#include<stdio.h>
struct course
{
    char name[40];
    int code;
    float credit_hour;

};
struct course b[5];
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("Enter the name: ");
        scanf("%s",b[i].name);
        printf("Enter the code");
        scanf("%d",&b[i].code);
        printf("Enter the credit hour:");
        scanf("%f",&b[i].credit_hour);
    
    }
    for(i=0;i<5;i++)
    {
       if(b[i].credit_hour>3)
        {
            printf("name=%s    code=%d      credit_hour=%f",b[i].name,b[i].code,b[i].credit_hour);
        }
    }

    return 0;
}
