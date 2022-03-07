// Structure in function.
#include<stdio.h>
void print(int,char[],float);
struct student
{
    int age;
    char name[30];      //dont forgot to give the size of string.
    float fee;
};
struct student s;
int main()
{
    printf("Enter the age:");
    scanf("%d",&s.age);
    printf("Enter the name:");
    scanf("%s",s.name);
    printf("Enter the fee:");
    scanf("%f",&s.fee);
    print(s.age,s.name,s.fee);
    return 0;
}
void print(int age,char name[30],float fee)
{
    printf("age=%d\n",age);     //here we can directly acces to the variables in structure and print their values.
    printf("name=%s\n",name);   // as scanf already pass the values to the variabel.
    printf("fee=%f\n",fee);
}