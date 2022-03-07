//Example 2 (Function with arguments but no return values.)
//      This does not means the program does not have any values .(i.e we will solve it inside the function definition)
//      This onlymeans that we cant return the value from function definition to the main function.
#include<stdio.h>
void area_rect(int,int);
int main()
{
    int l,b;    //no additional variable cause we do not return value
    printf("Enter the values of L and B:");
    scanf("%d%d",&l,&b);
    area_rect(l,b);
    return 0;
}
void area_rect(l,b)
{
    int area;
    area =l*b;      //we cant return any values in the function definition!!!!
    printf("The area of rectangle is %d\n",area);
}