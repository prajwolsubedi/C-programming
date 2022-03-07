#include<stdio.h>
int main(){
int i, age[10];
printf("Enter the array elements:");
for(i=0;i<10;i++)
{
scanf("%d",&age[i]);
printf("%d\t",age[i]);
}
return 0;
}
