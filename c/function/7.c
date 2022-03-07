//4.Function with neither arguments nor return values
#include<stdio.h>
void area_rect(void);
int main()
{
    area_rect();    
    return 0;
}
void area_rect()
{
    int l,b,area;
    printf("Enter the values of l and b:");
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("The required area of the triangle is %d\n",area);

}