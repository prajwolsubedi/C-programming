//string and pointer.
#include<stdio.h>
int main()
{
    char s[]="C programming";
    char *p;
    p=s;
    while(*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
    return 0;
}