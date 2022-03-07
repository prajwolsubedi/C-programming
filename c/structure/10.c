// Union(same as structure expects it cannot store all the elements at a time.)
#include<stdio.h>
union std
{
    int a;
    int b;
};
int main()
{
    union std u;
    u.a=40;
    printf("the value of b is: %d\n",u.b);      // it only stores the value of a=40 so 
    //      value of b is also 40 cause they have the same memory address.
    u.b=50;
    printf("The value of a is: %d\n",u.a);      //it also only store the value of b i.e 50 so the value of a is also 50.
    return 0;
}
