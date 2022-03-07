//Example of nested function. 
//NOTE: We cannot define a function within another function in C language, We can only call a function within another function.
#include<stdio.h>
void fun1();
void fun2();
int main()
{
    fun2();

}
void fun1()
{
    printf("This is function 1\n");

}
void fun2()
{
    fun1();
    printf("This is function 2\n");
}