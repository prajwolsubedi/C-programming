// Pointer (its is necessary to initialize pointer)
#include<stdio.h>
int main()
{
    int x=100;
     int *ptr;
    ptr=&x;
    printf("%d\n",x);
    printf("%p\n",ptr);     //we use %p to print the address of a variable.
    printf("%p\n",&x);
    printf("%d\n",*ptr);
    printf("%p\n",&ptr);
    printf("%d\n",*(&x));//if it returns integer value we write %d.
    return 0;

}