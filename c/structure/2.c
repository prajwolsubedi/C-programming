//size of structure
#include<stdio.h>
struct person
{
    int age;
    char name[20];
    float salary;
};
struct person b;
int main()
{
    printf("the size of structure is:%lu",sizeof(b));           //where lu is a unsigned integer
    printf("the size of structure is also %lu",sizeof(struct person));
    return 0;
} 