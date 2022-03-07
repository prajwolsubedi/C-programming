// chain of pointer
#include<stdio.h>
int main()
{
    int x=10;
    int *ptr1,**ptr2,***ptr3;
    ptr1=&x;
    ptr2=&ptr1;
    ptr3=&ptr2;
    printf("%d\n",**ptr2);
    printf("%d\n",***ptr3);

    return 0;
}