#include<stdio.h>
int func1();
int func2(int,int);
int main()
{
    int sum;
    sum=func1();
    printf("The total sum is: %d",sum);
    return 0;
}
int func1()
{
   return func2(10,20); //here in my case the program works only when i write return here but sir didnt write return.
}
int func2(int a, int b)
{
    return (a+b); 
}