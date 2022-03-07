// Recursive functionn (2021 july 11)
//Using recurtion user defined function to find the factorial of any whole numbers.
#include<stdio.h>
int factorial(int);
int main()
{
    int n,f;
    printf("Enter any whole numbers:");
    scanf("%d",&n);
    f=factorial(n);
    printf("The required factorial is %d\n",f);
    return 0;
}
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
}