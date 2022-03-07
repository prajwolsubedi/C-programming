//program to find the largest number among two using User Defined Function.
#include<stdio.h>
int check(int,int);
int main()
{
    int Large,a,b;
    printf("Enter the values of A and B:");
    scanf("%d%d",&a,&b);
    Large=check(a,b);
    if (Large==a)                       //Did this cause wanna print the result in form of A or B.
    {
        printf("The largest number is A\n");   
    }
    else
    {
            printf("The largest number is B\n");
    }
}
int check(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
