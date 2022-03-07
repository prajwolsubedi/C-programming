// Function pointer 
// syntax: return_type (pointer_name) (argument list)   ex int (*p)(int, int);
#include<stdio.h>
int fun(int,int);
int main()
{
    int x,y,sum;
    int (*p)(int,int); //declaration of function pointer
    p=&fun; // we can also simply write (p=fun)
    sum=p(60,39);
    printf("%d",sum); //function call
    return 0;
}
int fun(int a, int b)
{
    return a+b;
}
