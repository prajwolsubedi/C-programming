#include<stdio.h>
int main()
{
    char *s1="Name";    //We are not writing *s1[] cause pointer only stores address so size is not necessary.
    char *s2;       // It will be wrong if you equal the string (i.e s1[]=s2[])
    s2=s1;
    printf("%s",s2);
    return 0;

}