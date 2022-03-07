// Passing string as an argument to the function.
#include<stdio.h>
void string(char* str);
int main()
{
    char str[40]="Kathmandu Nepal";
    string(str);
    return 0;
}
void string(char* str)
{
    printf("Input string is : %s",str);
}