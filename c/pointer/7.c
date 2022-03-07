//string
#include<stdio.h>
int main()
{
    char *s="Programming";
    printf("%s\n",s);
    printf("%c\n",s);
    printf("%c\n",*s);
    printf("%c\n",*(s+1));
    printf("%c\n",*s+2);
    return 0;
}