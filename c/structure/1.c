//STRUCTURE(19th July 2021)
#include<stdio.h>
struct book
{
    int page;
    char author[10];        //this is not array this is only string.
    float price; 
};
struct book b={77,"dale",377.7};
int main()
{
    printf("page number is %d\n",b.page);
    printf("The author of the book is is %s\n",b.author);
    printf("The price of the book  is %.1f\n",b.price);
    return 0;
}
