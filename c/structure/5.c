//  NESTED STRUCTURE
/*  #include<stdio.h>   (example)
struct emp
{
    int salary;
    char name;
};
struct DOB
{
    int year,month,day;
    struct emp e;
};
struct DOB d;
*/
#include<stdio.h>
struct emp
{
    int id;
    char name[10];  //      #you should never forgot to write the size of the string here.
    float salary;

};
struct dob
{
    int year,month,day;
    struct emp e;
};
struct dob d;
int main()
{
    printf("Enter your id");
    scanf("%d",&d.e.id);
    printf("Enter your name");
    scanf("%s",d.e.name);
    printf("Enter your birth year:");
    scanf("%d",&d.year); 

     printf("your id:%d\n",d.e.id);
    printf("your name:%s\n",d.e.name);
    printf("your birth year is:%d\n",d.year);
    return 0;
}