// Passing array of structure as an function argument.
#include<stdio.h>
struct student
{
    int id;
    char name[30];      //String size is always absolutely necessary!!!!!!
    float fee;
};
struct student e[3];
void check(struct student e[]);
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
    printf("Enter id:");
    scanf("%d",&e[i].id);
    printf("Enter name:");
    scanf("%s",e[i].name);
    printf("Enter the fee:");
    scanf("%f",&e[i].fee);
    }
    check(e);       //--------function call; we only need the adress of the variable so we only pass the variable name.
    return 0;
}
//here we are using structure array so we have to write e[] to access the corresponding values
void check(struct student e[])          //---------function definition
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Your id: %d",e[i].id);
        printf("your name: %s",e[i].name);
        printf("your fee: %.2f",e[i].fee);
    }

}