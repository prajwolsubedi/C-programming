#include<stdio.h>
int Addition(int,int);
int main()
{
    int a, b, sum;
    printf("Enter the values of A and B:");
    scanf("%d%d",&a,&b);
    sum=Addition(a,b);
    printf("the required sum in %d\n",sum);
}
int Addition(int a, int b)
{
    return(a+b);
}
