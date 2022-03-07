// warning occured!!!
// Passing array of structure as an function argument and returning the value using structure data type.
#include<stdio.h>
struct student
{
    int id;
    char name[30];      //String size is always absolutely necessary!!!!!!
    float fee;
};
struct student e[3];
struct student check(struct student e[]);   //here the type is struct student (we need to write the name of struct also)
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
    check(e);    
    for(i=0;i<3;i++)
    {
        printf("your id: %d",e[i].id);
        printf("your name: %s",e[i].name);
        printf("your fee: %f",e[i].fee);
    }
    return 0;
}
//here we are using structure array so we have to write e[] to access the corresponding values
struct student check(struct student e[])          //---------function definition
{
    int i;
    for(i=0;i<3;i++)
    {
    return e[i];
    }
}