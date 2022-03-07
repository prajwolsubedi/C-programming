// Passing Array as an argument to the function.
// Just like variable array can be passed to the functon as an argument.
// While passing array, we actually pass the base address of the array not the whole array.
#include<stdio.h>
void check(int []);//here we have to write [] so that function can know it is array that we are declaring
int main()
{
    int i,a[5]={5,10,15,20,25};
    check(a);
    printf("your new array element is:");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}
void check(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        a[i]=a[i]/5;
    }
}