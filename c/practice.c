//WAP to count the total number of employee getting salary 50000 to 100000 using array.
#include<stdio.h>
#include<conio.h>
int main()
{
	int salary[5],i,count=0;
	printf("Enter the salary of five employee: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&salary[i]);
	}
	for(i=0;i<5;i++)
	{
		if(salary[i]>=50000 && salary[i]<=100000)
		count ++;
	}
	printf("Total number of employee getting salary from 50000 to 100000 is %d.",count);
	getch();
	return 0;
}