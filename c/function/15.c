#include<stdio.h>
int total(char []);
int main()
{
    char a[20]="Prajwol Subedi";
    int length;
    length=total(a);
    printf("The length of the given string is: %d",length);
    return 0;
}
int total(char a[])
{
    int i,count=0;
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    return count;
}