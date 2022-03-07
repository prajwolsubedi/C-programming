#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i,*p[5];
    for (i=0;i<5;i++)
    {
        p[i]=&a[i];
    }
    printf("your array elements are:");
    for (i=0;i<5;i++)
    {
        printf("%d\t",*p[i]);
    }
    return 0;
}