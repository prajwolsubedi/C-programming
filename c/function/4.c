/*  Types of user defined function
1. Function with both arguments and return values.
2. Function with argument but no return values.
3. Function with no argument but return values.
4. Function with neither arugument nor return values.*/

// Example 1    (Function with both arguments and return values)
#include<stdio.h>
int area(int,int);
int main()
{
    int l,b,Result;
    printf("Enter the values of l and b");
    scanf("%d%d",&l,&b);
    Result=area(l,b);
    printf("The area of the rectangle is %d\n",Result);

}
int area(int a, int b)
{
    return a*b;
}