//3.Function without arguments but return value.
#include<stdio.h>       
int area_rect(void);
int main()
{
    int result;
    result = area_rect();
    printf("The area of rectangle is %d\n", result);
    
}
int area_rect()
{
    int l,b;
    printf("Enter the values of l and b:");
    scanf("%d%d",&l,&b);
    return(l*b);
}