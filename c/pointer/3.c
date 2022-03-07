#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i,*p;
    p=&a[0];
    printf("your array elements are:");
    for(i=0;i<5;i++)
    {
        printf("%d\t",*(p+i));      //We should use %d incase we wanna find the address.
    }
    return 0;
}